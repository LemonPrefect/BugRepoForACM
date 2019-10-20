//杭电OJ 2014
#include <stdio.h>
int main(){
	int i,j;
	float *scoreArray;
	int numInLine = 0;
	float ex = 0;
	float result;
	while(scanf("%d",&numInLine) != EOF){
		result = 0;
		scoreArray = (float*)calloc(numInLine,sizeof(float));
		for(i = 0;i < numInLine;i++){
			scanf("%f",&scoreArray[i]);
		}
		for(i = 0;i < numInLine;i++){
			for(j = 0;j < numInLine - 1;j++){
				if(scoreArray[j+1] < scoreArray[j]){
					ex = scoreArray[j+1];
					scoreArray[j+1] = scoreArray[j];
					scoreArray[j] = ex;
				}	
			}
		}
		for(i = 1;i < numInLine - 1;i++){
			result += scoreArray[i];
		}
		result = result / (numInLine - 2);
		printf("%.2f\n",result);
	}
	return 0;
} 
