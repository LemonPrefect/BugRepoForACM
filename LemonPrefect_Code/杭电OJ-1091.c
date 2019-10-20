//杭电OJ 1091
#include <stdio.h>
int main(){
	int addNumA = 0,addNumB = 0;
	int i = 0;
	while((scanf("%d %d",&addNumA,&addNumB)!=EOF) && (addNumA != 0 || addNumB != 0)){
		printf("%d\n",addNumA + addNumB);
	}
	return 0;
}
