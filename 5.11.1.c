//C PRIMER PLUS 6 
//5.11.1
#include <stdio.h>
#define TIME_CONVERT 60
int main(){
	int timeInSec = 0;
	const int TIME_CONVERT_FORMAT2 = 60;
	printf("Please enter a time in seconds:");
	scanf("%d",&timeInSec);
	while(timeInSec != 0){
		printf("The time is %d hour(s) %d minute(s).\n",timeInSec / TIME_CONVERT,timeInSec % TIME_CONVERT_FORMAT2);
		printf("Please enter the next time to convert:");
		scanf("%d",&timeInSec);
	}
	printf("Thanks for using!");
	return 0;
} 
