//C PRIMER PLUS 6
//5.11.6
#include <stdio.h>
//#include <math.h>
int main(){
	int count,sum;
	int daysInput = 0;
	count =0;
	sum = 0;
	printf("Please enter the number of the day:");
	scanf("%d",&daysInput);
	while(count++ < daysInput)
		sum = sum + count * count;
		//sum = sum + pow(count,2);
	printf("sum = %d\n",sum);	
	return 0;
}
