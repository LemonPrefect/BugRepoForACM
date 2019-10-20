//杭电OJ 2042
#include <stdio.h>
int main(){
	int i,j;
	int sheep = 3;
	int tollStation = 0;
	int timesToRun = 0;
	scanf("%d",&timesToRun);
	getchar();
	for(i = 0;i < timesToRun;i++){
		scanf("%d",&tollStation);
		sheep = 3;
		for(j = 0;j < tollStation;j++){
			sheep -= 1;
			sheep *= 2;
		}
		printf("%d\n",sheep);
	}
	return 0;
} 
