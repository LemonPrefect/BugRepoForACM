//杭电OJ 2051
#include <stdio.h>
int main(){
    int num;
    int numArray[10];
    int i,j,k;
    while(scanf("%d",&num) != EOF){
        i = 0;
        while(num != 0){
            numArray[i] = num % 2;
            num /= 2;
            i++;
        }
        for(j = i - 1;j >= 0;j--){
            printf("%d",numArray[j]);
            if(j == 0){
                printf("\n");
            }
        } 
    }
    return 0;
}
