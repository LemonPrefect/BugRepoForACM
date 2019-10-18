//杭电OJ 1106
#include <stdio.h>
#include <string.h>
int main(){
    long long numArray[10000];
    char strNum[100000];
    char *strNumTemp;
    int i,j,k;
    int ex;
    while(scanf("%s",strNum) != EOF){
        i = 0;
        strNumTemp = strtok(strNum,"5");
        numArray[0] = atoi(strNumTemp);
        while(strNumTemp != NULL){
            numArray[i++] = atoi(strNumTemp);
            strNumTemp = strtok(NULL,"5");
        }
        for(j = 0;j < i;j++){
            for(k = 0;k < i - 1;k++){
                if(numArray[k + 1] < numArray[k]){
                    ex = numArray[k + 1];
                    numArray[k + 1] = numArray[k];
                    numArray[k] = ex;
                }
            }
        }
        for(j = 0;j < i;j++){
            if(j == i - 1){
                printf("%d\n",numArray[j]);
            }else{
                printf("%d ",numArray[j]);
            }
        }
        memset(numArray,0,sizeof(numArray));
        memset(strNum,0,sizeof(strNum));
    }
}

