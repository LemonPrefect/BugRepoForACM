//杭电OJ 2026
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char strArray[101];
	int i,l;
	while(gets(strArray)){
		l = 1;
		for(i = 0;i < strlen(strArray);i++){
			if(l == 1 && strArray[i] != ' '){
				strArray[i] = toupper(strArray[i]);
				l = 0;
			}
			else if(strArray[i] == ' '){
				l = 1;
			}
		}
		printf("%s\n",strArray);	
	}
	return 0;
}
