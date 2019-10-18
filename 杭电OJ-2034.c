//杭电OJ 2034
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j,k,l;
	int *ArrayA;
	int *ArrayB;
	int *ArrayC;
	int ex = 0;
	int numInA = 0,numInB = 0;
	while(scanf("%d %d",&numInA,&numInB) != EOF){
		if(numInA == 0 && numInB ==0){
			break;
		}
		 k = 0;
		ArrayA = (int*)calloc(numInA,sizeof(int));
		ArrayB = (int*)calloc(numInB,sizeof(int));
		ArrayC = (int*)calloc((numInB + numInA),sizeof(int));
		for(i = 0;i < numInA;i++){
			scanf("%d",&ArrayA[i]);
		}
		for(i = 0;i < numInB;i++){
			scanf("%d",&ArrayB[i]);
		}
		for(i = 0;i < numInA;i++){
			l = 0;
			for(j = 0;j < numInB;j++){
				if(ArrayA[i] != ArrayB[j]){
					l++;
				}
			}
			if(l == numInB){
				ArrayC[k] = ArrayA[i];
				k++;	
			} 
		}
		if(k == 0){
			printf("NULL\n");
		}else{
			for(i = 0;i < k;i++){
				for(j = 0;j < (k - 1);j++){
					if(ArrayC[j + 1] < ArrayC[j]){
						ex = ArrayC[j + 1];
						ArrayC[j + 1] = ArrayC[j];
						ArrayC[j] = ex;
					}
				}
			}
			for(i = 0;i < k;i++){
				if(i == (k - 1)){
					printf("%d \n",ArrayC[i]);
				}else{
					printf("%d ",ArrayC[i]);
				}
			}
		}
	}
	return 0;
}
