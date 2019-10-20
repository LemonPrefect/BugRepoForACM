//杭电OJ 1005
#include <stdio.h>
int main(){
    __int64 n = 0;
    int a = 0,b = 0;
    int i; 
    int resultArray[50];
    resultArray[0] = 1;
    resultArray[1] = 1;
    while(scanf("%d %d %I64d",&a,&b,&n) != EOF){
        getchar();
        if(a == b && b == n && n == 0){
            break;
        }
        for(i = 2;i < 49;i++){
        resultArray[i] = (a * resultArray[i - 1] + b * resultArray[i - 2]) % 7;
        }
        printf("%d\n",resultArray[n % 49 - 1]);
    }
    return 0;
}

