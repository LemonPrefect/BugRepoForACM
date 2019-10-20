#include <stdio.h>
#include<string.h>

int main(){
    char str1[100];
    const char z[1] = {' '};
    char *str,*str2[1000];
    int n = 0,a =0,b,c;
        scanf("%d",&n);
        getchar();
        for(b=0;b<n;b++){
        gets(str1);
        printf("6%c%c%c%c%c\n",str1[6],str1[7],str1[8],str1[9],str1[10]);
        }
            return 0;
    }
