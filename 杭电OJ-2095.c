//杭电OJ 2095
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int numInLine = 0;
    int* numArray;
    int i;
    int result = 0;
    while(scanf("%d",&numInLine) != EOF){
        if(numInLine == 0){
            break;
        }
        getchar();
        numArray = (int*)calloc(numInLine,sizeof(int));
        for(i = 0;i < numInLine;i++){
            scanf("%d",&numArray[i]);
        }
        getchar();
        result = numArray[0];
        for(i = 1;i < numInLine;i++){
            result = result ^ numArray[i];
        }
        printf("%d\n",result);
    }
    return 0;
}