//杭电OJ 2020
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j,k;
	int *numArray;
	int *minusArray;
	int numInLine = 0;
	int ex = 0;
	while(scanf("%d",&numInLine) != EOF){
		if(numInLine == 0){
			break;
		}
		numArray = (int*)calloc(numInLine,sizeof(int));
		minusArray = (int*)calloc(numInLine,sizeof(int));
		for(i = 0;i < numInLine;i++){
			scanf("%d",&numArray[i]);
		}
		for(i = 0;i < numInLine;i++){
			if(numArray[i] < 0){
				minusArray[i] = 1;
			}else{
				minusArray[i] = 0;
			}
		}
		for(i = 0;i < numInLine;i++){
			if(numArray[i] < 0){
				numArray[i] = 0 - numArray[i];
			}
		}
		for(i = 0;i < numInLine;i++){
			for(j = 0;j < numInLine - 1;j++){
				if(numArray[j+1] > numArray[j]){
					ex = numArray[j+1];
					numArray[j+1] = numArray[j];
					numArray[j] = ex;
					ex = minusArray[j+1];
					minusArray[j+1] = minusArray[j];
					minusArray[j] = ex;
				}
			}
		}
		for(i = 0;i < numInLine;i++){
			if(minusArray[i] == 1){
				numArray[i] = 0 - numArray[i];
			}
		}
		for(i = 0;i < numInLine;i++){
			if(i == numInLine - 1){
				printf("%d",numArray[i]);
			}else{
				printf("%d ",numArray[i]);
			}
		}
		printf("\n");
	}
}
