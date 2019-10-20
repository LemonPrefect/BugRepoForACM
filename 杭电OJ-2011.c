//杭电OJ 2011
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int terms = 0;
	int numInLine = 0;
	int i,j;
	int *numArray;
	float *resultArray;
	while(scanf("%d",&numInLine) != EOF){
		numArray = (int*)calloc(numInLine,sizeof(int));
		resultArray = (float*)calloc(numInLine,sizeof(float));
		getchar();
		for(i = 0;i < numInLine;i++){
			scanf("%d",&numArray[i]); 
		}
		for(i = 0;i < numInLine;i++){
			for(j = 0;j < numArray[i];j++){
				resultArray[i] =  resultArray[i] + (pow(-1,j) / (j + 1)); 
			} 	
		}
		for(i = 0;i < numInLine;i++){
			printf("%.2f\n",resultArray[i]);
		}
	}
	return 0;
}
