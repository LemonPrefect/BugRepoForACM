//杭电OJ 1090
#include <stdio.h>
int main(){
	int timesToRun = 0;
	int i = 0;
	int addNumA = 0,addNumB = 0;
	scanf("%d",&timesToRun);
	for(i = 0;i < timesToRun;i++){
		scanf("%d %d",&addNumA,&addNumB);
		printf("%d\n",addNumA + addNumB);
	}
}
