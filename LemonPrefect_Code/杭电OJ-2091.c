//杭电OJ 2091
#include <stdio.h>
int main(){
    char character = 'a';
    int row = 0;
    int i,j;
    int timesRun = 0;
    while(scanf("%c",&character) != EOF){
    	if(character == '@')
            break;
    	scanf("%d",&row);
        getchar();
        timesRun++;
        if(timesRun > 1){
             printf("\n");
        }
        for(i = 0;i < row - 1;i++){
            for(j = row - 2;j >= i;j--){
                printf(" ");
            }
            printf("%c",character);
            for(j = 0;j < i;j++)
                printf(" ");
            for(j = 1;j < i;j++)
                printf(" ");
            if(i != 0)
                printf("%c",character);    
            printf("\n");
        }
        for(j = 0;j < (row - 1) * 2 + 1;j++)
                printf("%c",character);
        printf("\n");
    }
    return 0;

}
