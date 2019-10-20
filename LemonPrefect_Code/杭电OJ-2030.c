//杭电OJ 2030
#include <stdio.h>
#include <string.h>
int main(){
	int i,j,k;
	char str[10000];
	int timesToRun = 0;
	scanf("%d",&timesToRun);
	getchar();
	for(i = 0; i < timesToRun;i++){
		k = 0;
		gets(str);
		for(j = 0;j < strlen(str);j++){
			if(str[j] < 0){
				k++;	
			}
		}
		printf("%d\n",k / 2);
	}
}
