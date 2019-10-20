//杭电OJ 2033
#include <stdio.h>
int main(){
	int timeToRun = 0;
	int timeA[3] = {0,0,0};
	int timeB[3] = {0,0,0};
	int timeC[3] = {0,0,0};
	int i,j;
	scanf("%d",&timeToRun);
	getchar();
	for(i = 0; i < timeToRun; i++){
		scanf("%d %d %d %d %d %d",&timeA[0],&timeA[1],&timeA[2],&timeB[0],&timeB[1],&timeB[2]);
		timeC[0] = timeA[0] + timeB[0];
		timeC[1] = timeA[1] + timeB[1];
		timeC[2] = timeA[2] + timeB[2];
		
		timeC[1] += timeC[2] / 60;
		timeC[2] %= 60;
		timeC[0] += timeC[1] / 60;
		timeC[1] %= 60;
		
		printf("%d %d %d\n",timeC[0],timeC[1],timeC[2]);
	}
	return 0;
}
