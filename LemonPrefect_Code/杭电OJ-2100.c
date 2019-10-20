//杭电OJ 2100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char numA[1000],numB[1000];
    __int64 sumA = 0,sumB = 0,sum = 0;
    int i,j;
    char numC[1000];
    while(scanf("%s %s",numA,numB) != EOF){
        memset(numC,0,sizeof(numC));
        sumA = 0;
        sumB = 0;
        sum = 0;
        for(i = 0,j = strlen(numA) - 1;i < strlen(numA);i++,j--){
            sumA += (numA[i] - 'A') * pow(26,j);
        }
        for(i = 0,j = strlen(numB) - 1;i < strlen(numB);i++,j--){
            sumB += (numB[i] - 'A') * pow(26,j);
        }
        sum = sumA + sumB;
        i = 0;
        while(sum != 0){
            numC[i++] = sum % 26;
            sum /= 26;
        }
        for(i = strlen(numC) - 1;i >= 0;i--){
            printf("%c",numC[i] + 'A');
        }
        printf("\n");
    }
}
