//杭电OJ 2018
#include <stdio.h>
#include <stdlib.h>
int main(){
	int cowArray[4] = {1,0,0,0};
	int i,j;
	int day = 0;
	while(scanf("%d",&day) != EOF){
		if(day == 0){
			break;
		}
		cowArray[0] = 1;
		cowArray[1] = 0;
		cowArray[2] = 0;
		cowArray[3] = 0;
		for(i = 1;i < day; i++){
			cowArray[0] += cowArray[1];
			//printf("%d %d %d %d\n",cowArray[0],cowArray[1],cowArray[2],cowArray[3]);
			cowArray[1] = cowArray[2];
			//printf("%d %d %d %d\n",cowArray[0],cowArray[1],cowArray[2],cowArray[3]);
			cowArray[2] = cowArray[3];
			//printf("%d %d %d %d\n",cowArray[0],cowArray[1],cowArray[2],cowArray[3]);
			cowArray[3] = cowArray[0];
			//printf("%d %d %d %d\n\n",cowArray[0],cowArray[1],cowArray[2],cowArray[3]);
		}
		printf("%d\n",cowArray[0] + cowArray[1] + cowArray[2] + cowArray[3]);
	}
	return 0;
} 
/*
0 1 2 3 
1 0 0 0 1
1 0 0 1 2
1 0 1 1 3
1 1 1 1 4
2 1 1 2 5
3 1 2 3 6
*/
