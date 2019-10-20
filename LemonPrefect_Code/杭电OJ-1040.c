#include <stdio.h>
int main(){
    int timesToRun = 0;
    int *numArray;
    int numInLine = 0;
    int i,j,k;
    int ex;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%d",&numInLine);
        numArray = (int*)calloc(numInLine,sizeof(int));
        for(j = 0;j < numInLine;j++){
            scanf("%d",&numArray[j]);
        }
        for(j = 0;j < numInLine;j++){
            for(k = 0;k < numInLine - 1;k++){
                if(numArray[k] > numArray[k + 1]){
                    ex = numArray[k];
                    numArray[k] = numArray[k + 1];
                    numArray[k + 1] = ex;
                }
            }
        }
        for(j = 0;j < numInLine;j++){
            if(j == numInLine - 1){
                printf("%d\n",numArray[j]);
            }else{
                printf("%d ",numArray[j]);
            }
        }
    }
    return 0;
}
