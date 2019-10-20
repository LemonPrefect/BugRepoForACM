//杭电OJ 2734
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char str[256];
    int i,j;
    long total = 0;
    while(gets(str)){
    	if(str[0] == '#'){
    		break;
		}
        total = 0;
        for(i = 0;i < strlen(str);i++){
            if(str[i] == ' '){
                total += (i + 1) * 0;
            }else{
                total += (i + 1) * (str[i] - 'A' + 1);
            }
        }
        printf("%ld\n",total);
        memset(str,0,sizeof(str));
    }
    return 0;
}
