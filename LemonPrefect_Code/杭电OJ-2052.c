//杭电OJ 2052
#include <stdio.h>
int main(){
    int i,j;
    int line = 0,row = 0;
    while(scanf("%d %d",&row,&line) != EOF){
        line += 2;
        row += 2;
        for(i = 0;i < line;i++){
            for(j = 0;j < row;j++){
                if((i == 0 && j == 0) || (i == line - 1 && j == 0) || (i == 0 && j == row - 1) || (i == line - 1 && j == row - 1)){
                    printf("+");
                }else if(i == 0 || i == line - 1){
                     printf("-");
                }else if(j == 0 || j == row - 1){
                    printf("|");
                }else{
                    printf(" ");
                }
                if(j == row - 1){
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
