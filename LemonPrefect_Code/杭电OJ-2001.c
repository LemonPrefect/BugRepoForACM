//杭电OJ 2001
#include <stdio.h>
#include <math.h>
int main(){
	double x1 = 0,x2 = 0,y1 = 0,y2 = 0;
	double result = 0;
	while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2) != EOF){
		result = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
		printf("%.2lf\n",result);
	}
	return 0;	
} 
