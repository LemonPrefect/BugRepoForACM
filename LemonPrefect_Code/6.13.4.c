//C PRIMER PLUS 6
//6.16.4
#include <stdio.h>
int main(){
	int i,j,count;
	char str[22] = "ABCDEFGHIJKLMNOPQRSTU";
	for(i = 0,count = 0;i<6;i++){
		for(j=0;j<=i;j++){
			putchar(str[count]);
			count++;
		}
		printf("\n");
	}
	return 0;
}

