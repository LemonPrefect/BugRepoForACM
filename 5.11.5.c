//C PRIMER PLUS 6
//5.11.5
#include <stdio.h>
int main(){
	int count,sum;
	int daysInput = 0;
	count =0;
	sum = 0;
	printf("Please enter the number of the day:");
	scanf("%d",&daysInput);
	while(count++ < daysInput)
		sum = sum + count;
	printf("sum = %d\n",sum);	
	return 0;
}
