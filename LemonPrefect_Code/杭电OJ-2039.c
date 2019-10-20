//杭电OJ 2039
#include <stdio.h>
#include <math.h>
int main(){
	int timesToRun = 0;
	double a = 0,b = 0,c = 0;
	int i;
	scanf("%d",&timesToRun);
	getchar();
	for(i = 0;i < timesToRun;i++){
		scanf("%lf %lf %lf",&a,&b,&c);
		if(a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
} 
