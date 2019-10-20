//杭电OJ 2019
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *numArray;
	int i,j;
	int numInLine = 0;
	int numInsert = 0;
	int ex = 0;
	while(scanf("%d",&numInLine) != EOF){
		numArray = (int*)calloc((numInLine + 1),sizeof(int));
		scanf("%d",&numInsert);
		if(numInLine == 0 && numInsert == 0){
			break;
		}
		getchar();
		for(i = 0;i < numInLine;i++){
			scanf("%d",&numArray[i]);
		}
		numArray[numInLine] = numInsert;
		for(i = 0;i < numInLine;i++){
			for(j = 0;j < numInLine;j++){
				if(numArray[j+1] < numArray[j]){
					ex = numArray[j+1];
					numArray[j+1] = numArray[j];
					numArray[j] = ex;
				}
			}
		}
		for(i = 0;i <= numInLine;i++){
			if(i == numInLine){
				printf("%d",numArray[i]);
			}else{
				printf("%d ",numArray[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
