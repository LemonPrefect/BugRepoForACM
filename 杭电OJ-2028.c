//杭电OJ 2028
#include <stdio.h>
int main(){
	int numInLine;
	long *array;
	long i,j,k;
	while(scanf("%d",&numInLine) != EOF){
		array = (long*)calloc(numInLine,sizeof(long));
		for(i = 0;i < numInLine;i++){
			scanf("%ld",&array[i]);
		}
		for(i = 1;i < 2147483647;i++){
			k = 0;
			for(j = 0;j < numInLine;j++){
				if(i % array[j] == 0){
					k++;
					//printf("%d",k);
					continue;
				}
				if(i % array[j] != 0){
					continue;
				}
			}
			if(k == numInLine){
				printf("%ld\n",i);
				break;
			}
		}
	}
	return 0;
}
