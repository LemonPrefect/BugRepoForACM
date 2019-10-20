//杭电OJ 2043
#include <stdio.h>
#include <string.h>
int main(){
	int timesToRun;
	int i,j,l;
	int switch1 = 0,switch2 = 0,switch3 = 0,switch4 = 0;
	char passwd[51];
	scanf("%d",&timesToRun);
	getchar();	
	for(i = 0;i < timesToRun;i++){
		scanf("%s",passwd);
		switch1 = 0,switch2 = 0,switch3 = 0,switch4 = 0;
		l = 0;
		for(j = 0;j < strlen(passwd);j++){
			if(switch1 == 1 && switch2 == 1 && switch3 == 1 && switch4 == 1){
				break;
			}
			if(switch1 == 0 && (passwd[j] >= 'A' && passwd[j] <= 'Z')){
				l++;
				switch1 = 1;
				continue;
			}
			if(switch2 == 0 && (passwd[j] >= 'a' && passwd[j] <= 'z')){
				l++;
				switch2 = 1;
				continue;
			}
			if(switch3 == 0 && (passwd[j] >= '0' && passwd[j] <= '9')){
				l++;
				switch3 = 1;
				continue;
			}
			if(switch4 == 0 && (passwd[j] == '~' || passwd[j] == '!' || passwd[j] == '@' || passwd[j] == '#' || passwd[j] == '$' || passwd[j] == '%' || passwd[j] == '^')){
				l++;
				switch4 = 1;
				continue;
			}
		}
		if(l >= 3 && strlen(passwd) >= 8 && strlen(passwd) <= 16){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
