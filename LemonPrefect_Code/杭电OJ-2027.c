//杭电OJ 2027
#include <stdio.h>
#include <string.h>
int main(){
	char strArray[101];
	int j,k,l;
	int a = 0,e = 0,i = 0,o = 0,u = 0;
	int timesToRun = 0;
	scanf("%d",&timesToRun);
	getchar(); //avoid the \n
	for(l = 0;l < timesToRun;l++){
		gets(strArray);
		a = 0,e = 0,i = 0,o = 0,u = 0;
		for(j = 0;j < strlen(strArray);j++){
			if(strArray[j] == 'a'){
				a++;
			}
			else if(strArray[j] == 'e'){
				e++;
			}
			else if(strArray[j] == 'i'){
				i++;
			}
			else if(strArray[j] == 'o'){
				o++;
			}
			else if(strArray[j] == 'u'){
				u++;
			}
		}
		if(l == timesToRun - 1){
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
		}else{
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n",a,e,i,o,u);
		}
		
	} 
	return 0;
} 
