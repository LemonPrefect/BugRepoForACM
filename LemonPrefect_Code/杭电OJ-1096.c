//杭电OJ 1096
#include <stdio.h>
int main(){
	int numInLine = 0;
	int *array;
	int i = 0,j = 0;
	int sum = 0;
	int timesToRun = 0;
	scanf("%d",&timesToRun);
	for(j = 0;j < timesToRun;j++){
		sum = 0;
		scanf("%d",&numInLine);
		array = (int*)calloc(numInLine,sizeof(int));
		for(i = 0;i < numInLine;i++){
			scanf("%d",&array[i]);
			sum += array[i];
		}
		if(j + 1 == timesToRun){
			printf("%d\n",sum);
		}
		else{
			printf("%d\n\n",sum);
		}
	}
	return 0;
}



