//杭电OJ 2007
#include <stdio.h>
#include <math.h>
int main(){
	int numA = 0,numB = 0;
	int i;
	int ex = 0;
	int productEven = 0,productOdd = 0;
	while(scanf("%d %d",&numA,&numB) != EOF){
		productEven = 0;
		productOdd = 0;
		if(numB < numA){
			ex = numA;
			numA = numB;
			numB = ex;
		}
		for(i = numA; i <= numB;i++){
			((i % 2) == 0)?(productEven+=pow(i,2)):(productOdd+=pow(i,3));
		}
		printf("%d %d\n",productEven,productOdd);
	}
	return 0;
}
