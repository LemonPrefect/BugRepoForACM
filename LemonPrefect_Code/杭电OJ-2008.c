//杭电OJ 2008
#include <stdio.h>
int main(){
	int numInLine = 0;
	int i;
	float *array;
	int sumMinus = 0,sumZero = 0,sumPositiveNum = 0;
	while(scanf("%d",&numInLine) != EOF){
		if(numInLine == 0){
			break;
		}
		sumMinus = 0;
		sumZero = 0;
		sumPositiveNum = 0;
		array = (float*)calloc(numInLine,sizeof(float));
		for(i = 0;i < numInLine;i++){
			scanf("%f",&array[i]);
		}
		for(i = 0;i < numInLine;i++){
			if(array[i] == 0){
				sumZero++;
			}else{
				(array[i] > 0)?(sumPositiveNum++):(sumMinus++);
			}
		}
		printf("%d %d %d\n",sumMinus,sumZero,sumPositiveNum);
	}
	return 0;
}
