//杭电OJ 2015 
#include <stdio.h>
int main(){
	int *evenArray;
	int numInTotal = 0;
	int numSplitParameter = 0;
	int i,j,k;
	int sum;
	
	while(scanf("%d",&numInTotal) != EOF){
		evenArray = (int*)calloc(numInTotal,sizeof(int));
		scanf("%d",&numSplitParameter);
		for(i = 2,j = 0;i <= numInTotal * 2;i+=2,j++){
			evenArray[j] = i;
		} 
		i = 0;
		for(j = 0;j < numInTotal / numSplitParameter;j++){
			sum = 0;
			for(k = 0;k < numSplitParameter;k++){
				sum += evenArray[i];
				i++;
			}
			sum /= numSplitParameter;
			if((j + 1) < numInTotal / numSplitParameter){
				printf("%d ",sum);
			}else{
				printf("%d",sum);
			}
		}
		if(numInTotal % numSplitParameter == 0){
			printf("\n");
			continue;
		}
		sum = 0;
		for(j = 0;j < numInTotal % numSplitParameter;j++){
			sum += evenArray[i];;
			i++;
		}
		sum /= j;
		printf(" %d\n",sum);
	}
}

