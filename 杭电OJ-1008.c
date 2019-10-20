//杭电OJ 1008
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int i;
    int* numArray;
    int numInLine = 0;
    int timeTotal = 0;
    while(scanf("%d",&numInLine) != EOF){
        if(numInLine == 0){
            break;
        }
        timeTotal = 0;
        numArray = (int*)calloc(numInLine + 1,sizeof(int));
        numArray[0] = 0;
        for(i = 1;i <= numInLine;i++){
            scanf("%d",&numArray[i]);
        }
        getchar();
        for(i = 1;i <= numInLine;i++){
            if(numArray[i] > numArray[i - 1]){
                timeTotal += (numArray[i] - numArray[i - 1]) * 6 + 5;
            }else if(numArray[i] < numArray[i - 1]){
                timeTotal += abs((numArray[i] - numArray[i - 1])) * 4 + 5;
            }else{
            	timeTotal += 5;
			} 
        }
        printf("%d\n",timeTotal);
    }
    return 0;
}
