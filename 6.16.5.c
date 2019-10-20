//C PRIMER PLUS 6
//6.16.5

#include <stdio.h>
char str[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int CountPosition(char s);
int main(){
	int i,j,k,position;
	char s;
	printf("Please enter a character:");
	scanf("%c",&s);
	position = CountPosition(s);
	for(i = 0;i <= position;i++){
		for(j = 0;j <= position - 1 - i;j++){
			printf("%c",' ');
		}
		for(j = 0;j < i + 1;j++){
			printf("%c",str[j]);
		}
		for(j = position - 1,k = i - 1;j >= position - i;j--,k--){
			printf("%c",str[k]);
		}
		printf("\n");
	}
	return 0;
}
int CountPosition(char s){
	int i;
	for(i = 0;str[i] != s;i++);
	return i;
}


/*
#include <stdio.h>
 int main(void){
	int m, n;
	char ch;
 	printf("Enter a character:");
	scanf("%c", &ch);
	for (m = 0; m < ch - 'A' + 1; m++){
		for (n = 0; n < ch - 'A' + 1 - m; n++){
			printf(" ");
		}
		for (n = 0; n <= m; n++){
			printf("%c",'A' + n);
		}
		for (n = m - 1 ; n >= 0; n--){
			printf("%c", 'A' + n);
		}
		printf("\n");
	}
	getchar();
	return 0;
}
*/

