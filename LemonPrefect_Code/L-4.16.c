//L 4.16
#include <stdio.h>
int main(){
	char poem[41] = "千山鸟飞绝万径人踪灭孤舟蓑笠翁独钓寒江雪";
	char **Array;
	int i,j,k;
	Array = (char**)calloc(4,sizeof(char*));
	for(i = 0;i < 4;i++){
		Array[i] = (char*)calloc(10,sizeof(char));
	}
	k = 0;
	for(i = 0;i < 4;i++){
		for(j = 0;j < 10;j++){
			Array[i][j] = poem[k];
			//printf("%d,%c%c\n",k,poem[k],poem[k + 1]);
			k++;
		} 
	} 
	printf("-- 横版 --\n\n"); 
	for(i = 0;i < 4;i++){
		for(j = 0;j < 10;j+=2){
			printf("%c%c",Array[i][j],Array[i][j + 1]);
			if(j == 8){
				printf("\n");
			}
		}
	}
	printf("\n"); 
	printf("-- 竖版 --\n\n"); 
	for(i = 0;i < 9;i+=2){
		for(j = 3;j >= 0;j--){
			printf("%c%c",Array[j][i],Array[j][i + 1]);
			if(j == 0){
				printf("\n");
			}
		} 
	}
	getchar();
} 
//30 20 10 00
//31 21 11 01
//32 22 12 02
//33 23 13 03
//34 24 14 04
