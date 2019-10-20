//C PRIMER PLUS 6
//5.11.2
#include <stdio.h>
int main(){
	int numInput = 0;
	printf("Please enter a number:");
	scanf("%d",&numInput);
	int numJudge = numInput + 10;
	while(numInput++ <= numJudge){
		printf("This round the output is:%d\n",numInput - 1);
	}
	return 0;
}
