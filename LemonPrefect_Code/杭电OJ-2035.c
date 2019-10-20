//杭电OJ 2035
#include <stdio.h>
int main(){
	int a = 0,b = 0;
	int i,j;
	int total = 1;
	char *strTotal;
	while(scanf("%d %d",&a,&b) != EOF){
		total = 1;
		if(a == 0 && b == 0){
			break;
		}
		for(i = 0;i < b;i++){
			total *= a;
			total %= 1000;	
		}
		printf("%d\n",total);
	}
	 
}
