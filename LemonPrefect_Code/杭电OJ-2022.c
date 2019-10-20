//杭电OJ 2022
#include <stdio.h>
#include <math.h>
int main(){
	int line = 0,row = 0;
	int numMax = 0;
	int i,j;
	int num = 0;
	int x,y;
	while(scanf("%d %d",&line,&row) != EOF){
		numMax = 0;
		for(i = 0;i < line;i++){
			for(j = 0;j < row ;j++){
				scanf("%d",&num);
				if(fabs(num) > fabs(numMax)){
					numMax = num;
					x = i;
					y = j;
				}
			}
		}
		printf("%d %d %d\n",x + 1,y + 1,numMax);
	}
	return 0;
}