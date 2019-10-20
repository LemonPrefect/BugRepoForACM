//杭电OJ 2006
#include <stdio.h>
int main(){
	int *array;
	int numInLine = 0;
	int sum = 1;
	int i = 0;
	while(scanf("%d",&numInLine) != EOF){
		sum = 1;
		array = (int*)calloc(numInLine,sizeof(int));
		for(i = 0;i < numInLine;i++){
			scanf("%d",&array[i]);
		}
		for(i = 0;i < numInLine;i++){
			if(array[i] % 2 != 0){
				sum*=array[i];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
} 
