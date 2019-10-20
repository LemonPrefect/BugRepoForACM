#include <cstdio>
#include <cstdlib>
int main(){
    int **squareArray;
    int i,j;
    int x,y;//x column y row
    scanf("%d %d",&x,&y);
    squareArray = (int**)calloc(x,sizeof(int*));
    for(i = 0;i < x;i++){
        squareArray[i] = (int*)calloc(y,sizeof(int));
    }
    for(i = 0;i < x;i++){
        for(j = 0;j < y;j++){
            scanf("%d",&squareArray[i][j]);
        }
    }
    for(i = x - 1;i >= 0;i--){
        for(j = y - 1;j >= 0;j--){
            if(squareArray[i][j] == 0){
                squareArray[i][j] = ((squareArray[i + 1][j] - 1 < squareArray[i][j + 1] - 1)?squareArray[i + 1][j]:squareArray[i][j + 1]) - 1;
                if(squareArray[i][j] <= squareArray[i - 1][j] || squareArray[i][j] <= squareArray[i][j - 1]){
                    printf("-1\n");
                    return 0;
                }
            }else{
                if((i == 0 && squareArray[i][j] >= squareArray[i + 1][j]) || j == 0 && (squareArray[i][j] >= squareArray[i][j + 1])){
                    printf("-1\n");
                    return 0;
                }else if(squareArray[i][j] >= squareArray[i + 1][j] || squareArray[i][j] >= squareArray[i][j + 1]){
                    printf("-1\n");
                    return 0;
                }
            }  
        }
    }
    int sum = 0;
    for(i = 0;i < x;i++){
        for(j = 0;j < y;j++){
            printf("%d ",squareArray[i][j]);
            sum += squareArray[i][j];
        }
        printf("\n");
    }
    printf("%d\n",sum);
    return 0;
    
/*                else
                    squareArray[i][j] = ((squareArray[i - 1][j] + 1 > squareArray[i][j - 1] + 1)?squareArray[i - 1][j]:squareArray[i][j - 1]) + 1;
*/ 
}
