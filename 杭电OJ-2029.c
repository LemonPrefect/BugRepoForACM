//杭电OJ 2029
#include <stdio.h>
#include <string.h>
int main(){
	char strArray[600];
	int i,j,k,l;
	int timesToRun = 0;
	scanf("%d",&timesToRun);
	getchar(); //avoid the \n
	for(i = 0;i < timesToRun;i++){
		scanf("%s",strArray);
		l = 0;
		for(j = 0,k = strlen(strArray) - 1;j < ((strlen(strArray)) / 2);j++,k--){
			if(strArray[j] == strArray[k]){
				l++;
			}
		}
		if(l == ((strlen(strArray)) / 2)){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	} 
	
} 
