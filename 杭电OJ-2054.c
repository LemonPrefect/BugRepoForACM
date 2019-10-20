
//杭电OJ 2054
#include <stdio.h>
#include <string.h>
char *NumProcess(char s[]);
int main(){
    char numA[100000];
    char numB[100000];
    int withPoint = 0;

    while(scanf("%s %s",numA,numB) != EOF){
        if(strcmp(NumProcess(numA),NumProcess(numB)) == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
char *NumProcess(char s[]){
    int i,j;
    int point = -1;
    if(strchr(s,'.')){
    for(i = strlen(s) - 1;i >= 0,s[i] == '0';i--){
        s[i] = 0;
    }
    if(s[strlen(s) - 1] == '.'){
        s[strlen(s) - 1] = 0;
    }   
    //printf("%s",s);
    }
    return s;
}