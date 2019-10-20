//杭电OJ 2072
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char words[1000][50];
    char strOriginal[5000];
    char* tempWord;
    int i,j;
    while(gets(strOriginal) != NULL){
        if(strOriginal[0] == '#' && strOriginal[1] == '\0'){
            break;
        }
        i = 0;
        memset(words,0,sizeof(words));
        tempWord = strtok(strOriginal," ");
        while(tempWord != NULL){
            for(j = 0;j < i;j++){
                if(strcmp(words[j],tempWord) == 0){
                    break;
                }
            }
            if(i == j){
                strcpy(words[i++],tempWord);
            }
            tempWord = strtok(NULL," ");
        }
        printf("%d\n",i);
    }
    return 0;
}
