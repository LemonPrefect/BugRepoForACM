#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


int main(){
    char str1[2001],str2[2001],str3[2001],str4[2001];
    long long n,len1,len2,d,a,b,c,next,t=1,x,i;
    scanf("%lld",&n);
    while(t <= n){
        memset(str1,0,sizeof(str1));
        memset(str2,0,sizeof(str2));
        memset(str3,0,sizeof(str3));
        scanf("%s %s",&str1,&str2);
        len1 = strlen(str1);
        len2 = strlen(str2);
        x = 0;
        if(len1 < len2){
        for(int i=0;i<=2001;i++){
            str3[i] = str1[i];
        }
        for(int i=0;i<=2001;i++){
            str1[i] = str2[i];
        }
        for(int i=0;i<=2001;i++){
            str2[i] = str3[i];
        }
        a = len2;
        len2 = len1;
        len1 = a;
        x=1;
        }
        for(int i=0;i<=2001;i++){
            str4[i] = str2[i];
        }
        d = len1 - len2;
        if(d != 0){
            for( i = len1 - 1;i>= 0;i--){
                if(i-d>=0)str2[i] = str2[i - d];
                else str2[i] = '0';
            }
        }
        next = 0;
        for(i = len1 - 1;i >= 0;i--){
            b = str1[i] - 48;
            c = str2[i] - 48;
            if(b + c + next >= 10){
            str3[len1-1-i] = (b + c + next - 10) + 48;
            next = 1;
            }else{
            str3[len1-1-i] = (b+c+next)+48;
            next = 0;    
            }
        }
        printf("Case %lld:\n",t);
        if(x == 0)printf("%s + %s = ",str1,str4);
        else printf("%s + %s = ",str4,str1);
        if(next == 1){
            printf("1");
            for( i = len1-1;i>=0;i--)printf("%c",str3[i]);
        }else{
            for(i = len1-1;i>=0;i--){
            printf("%c",str3[i]);    
            }
        }
    printf("\n");
    if(t != n)printf("\n");
        t++;
    }
    return 0;
}
