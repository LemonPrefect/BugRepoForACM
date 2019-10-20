//杭电OJ 2024
 #include <stdio.h>
 #include <string.h>
 int main(){
 	int i,j,k,l;
 	int timesToRun = 0;
 	char name[100];
 	scanf("%d",&timesToRun);
	 getchar();
	 for(i = 0;i < timesToRun;i++){
	 	k = 0;
	 	l = 0;
	 	gets(name);
	 	if(name[0] ==' ' || (name[0] >='0' && name[0] <= '9')){
	 		printf("no\n");
	 		continue;
		}
		for(j = 0; j < strlen(name);j++){
			if(name[j] == ' ' || !((name[j] >= 'a' && name[j] <= 'z') || (name[j] >= 'A' && name[j] <= 'Z') || (name[j] >= '0' && name[j] <= '9') || name[j] == '_')){
				printf("no\n");
				k = 1;
	 			break;	
			}
			if(name[j] >= '0' && name[j] <= '9'){
				l++;
			}
		}
		if(k != 1 && l != strlen(name)){
			printf("yes\n");
		}
		
	 } 
 } 
