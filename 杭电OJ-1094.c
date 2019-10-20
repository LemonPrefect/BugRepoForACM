//杭电OJ 1094
#include <stdio.h>
int main(){
	int numInLine = 0;
	int *array;
	int i = 0;
	int sum = 0;
	while(scanf("%d",&numInLine) != EOF){
		sum = 0;
		array = (int*)calloc(numInLine,sizeof(int));
		for(i = 0;i < numInLine;i++){
			scanf("%d",&array[i]);
			sum += array[i];
		}
		printf("%d\n",sum);
		
	}
	return 0;
}

