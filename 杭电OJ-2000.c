//杭电OJ 2000
#include <stdio.h>
int main(){
	char *array;
	char ex = 'A';
	int i,j;
	array = (char*)calloc(3,sizeof(char));
	while(scanf("%c%c%c",&array[0],&array[1],&array[2]) != EOF){
		 getchar();//avoid the \n
		for(i = 0;i < 3;i++){
			for(j = 0; j < 2;j++){
				if(array[j+1] < array[j]){
					ex = array[j];
					array[j] = array[j+1];
					array[j+1] = ex;
				}
			}
		}
		printf("%c %c %c\n",array[0],array[1],array[2]);	
	}
	return 0;
	
}

