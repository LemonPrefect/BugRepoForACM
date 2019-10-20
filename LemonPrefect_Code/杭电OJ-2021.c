//杭电OJ 2021.c
#include <stdio.h>
#include <stdlib.h>
int main(){
	int persons = 0;
	int i;
	int *salaryArray;
	int sheetMoney = 0;
	while(scanf("%d",&persons) != EOF){
		sheetMoney = 0;
		if(persons == 0){
			break;
		}
		salaryArray = (int*)calloc(persons,sizeof(int));
		getchar();
		for(i = 0;i < persons;i++){
			scanf("%d",&salaryArray[i]);
		}
		for(i = 0;i < persons;i++){
			sheetMoney += (salaryArray[i] / 100) + ((salaryArray[i] % 100) / 50) 
			+ (((salaryArray[i] % 100) % 50) / 10) + ((((salaryArray[i] % 100) % 50) % 10) / 5) 
			+ (((((salaryArray[i] % 100) % 50) % 10) % 5) / 2) + (((((salaryArray[i] % 100) % 50) % 10) % 5) % 2);	
		}
		printf("%d\n",sheetMoney);
	}
	return 0;
} 
