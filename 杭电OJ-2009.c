//杭电OJ 2009
#include <stdio.h>
#include <math.h>
int main(){
	float baseNum = 0;
	int terms = 0;
	float result = 0;
	int i;
	while(scanf("%f %d",&baseNum,&terms) != EOF){
		result = 0;
		for(i = 1;i <= terms;i++){
			result += baseNum;
			baseNum = sqrt(baseNum);
		}
		printf("%.2f\n",result);
	}
	return 0; 
} 
