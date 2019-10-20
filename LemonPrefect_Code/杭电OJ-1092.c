//杭电OJ 1092
#include <stdio.h>
int main(){
	int numInLine = 0;
	int *array;
	int i = 0;
	int sum = 0;
	scanf("%d",&numInLine);
	while(numInLine != 0){
		array=(int*)calloc(numInLine,sizeof(int)); 
		for(i = 0;i < numInLine;i++){
			scanf("%d",&array[i]);
			sum += array[i];
		}
		printf("%d\n",sum);
		sum = 0;
		scanf("%d",&numInLine);
	}
	return 0;
}
