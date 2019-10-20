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
    //read square to the Array
    for(i = 0;i < x;i++){
        for(j = 0;j < y;j++){
            scanf("%d",&squareArray[i][j]);
        }
    }
    //fill the blank positions
    for(i = x - 1;i >= 0;i--){
        for(j = y - 1;j >= 0;j--){
            if(squareArray[i][j] == 0){
                squareArray[i][j] = ((squareArray[i + 1][j] < squareArray[i][j + 1])?squareArray[i + 1][j]:squareArray[i][j + 1]) - 1;
            }
        }
    }

    //JudgeNum
    for(i = 0;i < x;i++){
        for(j = 0;j < y;j++){
            if(i == 0 && j == 0){//left top first
                if(!(squareArray[i][j] < squareArray[i][j + 1] && squareArray[i][j] < squareArray[i + 1][j])){
                    printf("-1\n");
                    return 0;
                }
            }else if(i == 0 && j == y - 1){//right top first
                if(!(squareArray[i][j] > squareArray[i][j - 1] && squareArray[i][j] < squareArray[i + 1][j])){
                    printf("-1\n");
                    return 0;
                }
            }else if(i == x - 1 && y == 0){//left bottom first
                if(!(squareArray[i][j] > squareArray[i - 1][j] && squareArray[i][j] < squareArray[i][j + 1])){
                    printf("-1\n");
                    return 0;
                }
            }else if(i == x - 1 && y == 0){//right bottom first
                if(!(squareArray[i][j] > squareArray[i - 1][j] && squareArray[i][j] > squareArray[i][j - 1])){
                    printf("-1\n");
                    return 0;
                }
            }else if(i == 0 && j != y - 1 && j != 0){//top escape angles
                if(!(squareArray[i][j] > squareArray[i][j - 1] && squareArray[i][j] < squareArray[i][j + 1] && squareArray[i][j] < squareArray[i + 1][j])){
                    printf("-1\n");
                    return 0;
                }
            }else if(i == x - 1 && j != y - 1 && j != 0){//bottom escape angles
                if(!(squareArray[i][j] > squareArray[i][j - 1] && squareArray[i][j] < squareArray[i][j + 1] && squareArray[i][j] > squareArray[i - 1][j])){
                    printf("-1\n");
                    return 0;
                }
            }else if(j == 0 && i != x - 1 && i != 0){//left escape angles
                if(!(squareArray[i][j] < squareArray[i][j + 1] && squareArray[i][j] > squareArray[i - 1][j] && squareArray[i][j] < squareArray[i + 1][j])){
                    printf("-1\n");
                    return 0;
                }
            }else if(j == y - 1 && i != 0 && i != x - 1){//right escape angles
                if(!(squareArray[i][j] > squareArray[i - 1][j] && squareArray[i][j] < squareArray[i + 1][j] && squareArray[i][j] > squareArray[i][j - 1])){
                    printf("-1\n");
                    return 0;
                }
            }else if(j != 0 && j != y - 1 && i != x - 1 && i != 0){//Custom
                if(!(squareArray[i][j] > squareArray[i][j - 1] && squareArray[i][j] < squareArray[i][j + 1] && squareArray[i][j] > squareArray[i - 1][j] && squareArray[i][j] < squareArray[i + 1][j])){
                    printf("-1\n");
                    return 0;
                }
            }
        }
    }




    int sum = 0;
    for(i = 0;i < x;i++){
        for(j = 0;j < y;j++){
            //printf("%d ",squareArray[i][j]);
            sum += squareArray[i][j];
        }
        //printf("\n");
    }
    printf("%d\n",sum);
    return 0;
    
/*                else
                    squareArray[i][j] = ((squareArray[i - 1][j] + 1 > squareArray[i][j - 1] + 1)?squareArray[i - 1][j]:squareArray[i][j - 1]) + 1;
*/ 
}

