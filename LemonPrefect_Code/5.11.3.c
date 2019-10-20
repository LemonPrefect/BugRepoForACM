//C PRIMER PLUS 6
//5.11.3
#include <stdio.h>
#define DAYSAWEEK 7
int main(){
	int daysInput = 0;
	printf("Please enter the number to convert:");
	scanf("%d",&daysInput);
	while(daysInput > 0){
		printf("%d days are %d week(s), %d days.\n",daysInput,daysInput / 7,daysInput % 7);
		printf("Please enter the next number to convert:");
		scanf("%d",&daysInput);
	}
	printf("Thanks for using!");
	return 0;
}
