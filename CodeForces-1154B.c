//CodeForces 1154B
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *numArray;
    int *sortArray;
    int sortNum = 0;
    int numInLine = 0;
    int i,j,k;
    int ex;
    while(scanf("%d",&numInLine) != EOF){
        numArray = (int*)calloc(numInLine,sizeof(int));
        sortArray = (int*)calloc(numInLine,sizeof(int));
        for(i = 0;i < numInLine;i++){
            scanf("%d",&numArray[i]);
        }
        for(i = 0;i < numInLine;i++){
            for(j = 0;j < numInLine - 1;j++){
                if(numArray[j] > numArray[j + 1]){
                    ex = numArray[j];
                    numArray[j] = numArray[j + 1];
                    numArray[j + 1] = ex;
                }
            }
        }
        sortArray[0] = numArray[0];
        for(i = 1,k = 1;i < numInLine;i++){
            //printf("$$%d %d\n",numArray[i],numArray[i + 1]);
            if(numArray[i] != numArray[i - 1]){
                sortArray[k] = numArray[i];
                k++;
            }
        }
        if(k == 1){
            printf("0\n");
            continue;
        }else if(k == 2){
            printf("%d\n",((sortArray[0] - sortArray[1]) % 2 == 0)?abs((sortArray[0] - sortArray[1]) / 2):abs(sortArray[0] - sortArray[1]));
            continue;
        }else if(k == 3 && abs(sortArray[2] - sortArray[1]) == abs(sortArray[1] - sortArray[0])){
            printf("%d\n",abs(sortArray[1] - sortArray[0]));
            continue;
        }else{
            printf("-1\n");
            continue;
        }
        return 0;
    }
}
