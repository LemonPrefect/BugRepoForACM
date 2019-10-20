//杭电OJ 2101
#include <stdio.h>
int main(){
    int numA = 0,numB = 0;
    int sum = 0;
    while(scanf("%d %d",&numA,&numB) != EOF){
        getchar();
        sum = numA + numB;
        if(sum % 86 == 0){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}