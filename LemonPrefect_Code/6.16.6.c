//C PRIMER PLUS 6
//6.16.5

#include <stdio.h>
#include <math.h>
int main(){
	int max,min,i,square,cubic;
	printf("Please enter the max and the min numbers:");
	scanf("%d %d",&min,&max);
	printf("num\tsquare\tcubic\n");
	for(i = min;i <= max;i++){
		square = pow(i,2);
		cubic = pow(i,3);
		printf("%d\t%d\t%d\n",i,square,cubic);
	}
	return 0;
}
