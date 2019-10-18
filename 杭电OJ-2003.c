//杭电OJ 2003
#include <stdio.h>
#include <math.h>
int main(){
	double num = 0;
	double result = 0;
	while(scanf("%lf",&num) != EOF){
		result = (num < 0)?(num - (2 * num)):num;
		printf("%.2lf\n",result);
	}
	return 0;	
} 

