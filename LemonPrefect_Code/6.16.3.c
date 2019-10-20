//C PRIMER PLUS 6
//6.16.3
#include <stdio.h>
int main(){
	int i,j;
	char str[7] = "FEDCBA";
	for(i=0;i<6;i++){
		for(j=0;j<=i;j++){
			putchar(str[j]);
		}
		printf("\n");
	}
	return 0;
}

	
