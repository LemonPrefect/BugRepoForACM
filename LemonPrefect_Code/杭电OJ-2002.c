//杭电OJ 2002
#include <stdio.h>
#include <math.h>
#define PI 3.1415927
int main(){
	double r = 0;
	double result = 0;
	while(scanf("%lf",&r) != EOF){
		result = (4 * PI * pow(r,3)) / 3;
		printf("%.3lf\n",result);
	}
	return 0;	
} 
