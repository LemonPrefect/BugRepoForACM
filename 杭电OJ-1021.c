//杭电OJ 1002
#include <stdio.h>
int main(){
    long numInput = 0;
    while(scanf("%ld",&numInput) != EOF){
        if((numInput - 2) % 4 != 0){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }
    return 0;
}