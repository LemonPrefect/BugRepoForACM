#include <cstdio>
int main(){
    int numInput;
    int i,j;
    scanf("%d",&numInput);
    for(i = 2;i < numInput + 2;i++){
        for(j = 2;j < numInput + 2;j++){
            if((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)){
                printf("W");
            }else{
                printf("B");
            }
        }
        printf("\n");
    }
}