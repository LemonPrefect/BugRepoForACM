//杭电OJ 2016
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *numArray;
	int i,j,k;
	int numInLine = 0;
	int minNumPosition = 0;
	int ex = 0;
	while(scanf("%d",&numInLine) != EOF){
		if(numInLine ==0){
			break;
		}
		numArray = (int*)calloc(numInLine,sizeof(int));
		for(i = 0;i < numInLine;i++){
			scanf("%d",&numArray[i]);
		}
		for(i = 0;i < numInLine;i++){
			k = 0;
			for(j = 0; j < numInLine;j++){
				if(numArray[j] > numArray[i]){
					k++;
				}
			}
			if(k == numInLine - 1){
				minNumPosition = i;
			}
		}
		ex = numArray[minNumPosition]; 
		numArray[minNumPosition] = numArray[0];
		numArray[0] = ex;
		for(i = 0;i < numInLine;i++){
			if(i == numInLine - 1){
				printf("%d",numArray[i]);
			}else{
				printf("%d ",numArray[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
