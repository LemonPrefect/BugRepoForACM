//杭电OJ 2012
#include <stdio.h>
#include <math.h>
int main(){
	int startNum = 0,endNum = 0;
	int judgeNum = 0;
	int i,j,k,l;
	int ex = 0;
	while(scanf("%d %d",&startNum,&endNum) != EOF){
		k = 0;
		if(startNum == 0 && endNum == 0){
			break;
		}
		if(startNum > endNum){
			ex = startNum;
			endNum = startNum;
			startNum = ex; 
		} 
		for(i = startNum; i <= endNum;i++){
			l = pow(i,2) + i + 41;
			for(j = 2;j < endNum;j++){
				if(l % j == 0){
					k++;
					continue;
				}
			}
		}
		if(k != 0){
			printf("Sorry\n");
		}else{
			printf("OK\n");
		}
		
	} 
	return 0;
} 
