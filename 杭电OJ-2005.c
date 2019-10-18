//杭电OJ 2005
#include<stdio.h>
int main(){
	int arrayLeapYear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int arrayYear[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int IsLeapYear(int year);
	int year = 0,month = 0,day = 0;
	int sumDays = 0;
	int i = 0;
	while(scanf("%d/%d/%d",&year,&month,&day)!= EOF){
		sumDays = 0;
		if(IsLeapYear(year) == 1){
			for(i = 0 ;i < month - 1;i++){
				sumDays += arrayLeapYear[i];
			}
		}else if(IsLeapYear(year) == 0){
			for(i = 0 ;i < month - 1;i++){
				sumDays += arrayYear[i];
			}
		}
		sumDays += day;
		printf("%d\n",sumDays);
	}
	
}
int IsLeapYear(int year){
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
		return 1;
	}
	return 0;
}

