//杭电OJ 2504
#include <stdio.h>
int gcd(int a,int b);
int main(){
    int a = 0,b = 0,c = 0;
    int i,j;
    int timesToRun = 0;
    scanf("%d",&timesToRun);
    for(i = 0;i < timesToRun;i++){
        scanf("%d %d",&a,&b);
        for(j = b + 1;;j++){
            if(gcd(a,j) == b){
                break;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
int gcd(int a,int b){
    return !b?a:gcd(b,a % b);
}