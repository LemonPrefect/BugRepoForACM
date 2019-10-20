//杭电OJ 2032
#include <stdio.h>
int main(){
	int **Array;
	int i,j;
	int n = 0;
	while(scanf("%d",&n) != EOF){
		Array = (int**)calloc(n,sizeof(int*));
		for(i = 0;i < n;i++){
			Array[i] = (int*)calloc(n,sizeof(int));
		}
		for(i = 0;i < n;i++){
			Array[i][0] = 1;
			for(j = 1;j <= i;j++){
				if(j == i){
					Array[i][j] = 1;
				}else{
					Array[i][j] = Array[i - 1][j] + Array[i - 1][j - 1];
				}
			}
		}
		for(i = 0;i < n;i++){
			for(j = 0;j <= i;j++){
				if(j == i){
					printf("%d\n",Array[i][j]);
				}else{
					printf("%d ",Array[i][j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
