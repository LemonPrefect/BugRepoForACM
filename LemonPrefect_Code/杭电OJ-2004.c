//杭电OJ 2004
#include <stdio.h>
int main(){
	int score = 0;
	while(scanf("%d",&score) != EOF){
		if(score <= 100 && score >= 90){
			printf("A\n");
		}
		if(score <= 89 && score >= 80){
			printf("B\n");
		}
		if(score <= 79 && score >= 70){
			printf("C\n");
		}
		if(score <= 69 && score >= 60){
			printf("D\n");
		}
		if(score <= 59 && score >= 0){
			printf("E\n");
		}
		if(score > 100 || score < 0){
			printf("Score is error!\n");
		}		
	}
}
