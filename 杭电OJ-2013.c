//杭电OJ 2013
#include <stdio.h>
int main(){
	int days = 0;
	int i;
	int result = 1;
	while(scanf("%d",&days) != EOF){
		result = 1;
		for(i = 1;i < days;i++){
			result = (result + 1) * 2;
		}
		printf("%d\n",result);
	}
	return 0;
} 
