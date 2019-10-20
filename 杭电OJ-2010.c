//杭电OJ 2010
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int i,j;
	int numStart = 0,numEnd = 0;
	char *result;
	int numString[3] = {0};
	while(scanf("%d %d",&numStart,&numEnd) != EOF){
		for(i = numStart,j = 0;i <= numEnd;i++){
			numString[0] = i / 100;
			numString[1] = (i / 10) % 10;
			numString[2] = i % 10;
			if((pow(numString[0],3) + pow(numString[1],3) + pow(numString[2],3)) == i){
				if(j == 0){
					printf("%d",i);	
					j++;
					continue;
				}
				if(j > 0){
					printf(" %d",i);
					j++;
					continue;
				}	
			}	
		}
		if(j == 0){
				printf("no");
		}
		printf("\n");	
	}
}
