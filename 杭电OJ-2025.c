//杭电OJ 2025
#include <stdio.h>
#include <string.h>
int main(){
    char strOriginal[101];
    //int maxBoolLog[101];
    char maxCharacter = 'a';
    //char strResult[401];
    const char *SIGN = "(max)";
    int i;
    while(scanf("%s",strOriginal) != EOF){
        maxCharacter = strOriginal[0];
        for(i = 0;i < strlen(strOriginal);i++){
            if(strOriginal[i] > maxCharacter){
                maxCharacter = strOriginal[i];
            }
        }
        for(i = 0;i < strlen(strOriginal);i++){
            if(strOriginal[i] == maxCharacter){
                printf("%c%s",maxCharacter,SIGN);
            }
            if(strOriginal[i] != maxCharacter){
                printf("%c",strOriginal[i]);
            }
        }
        printf("\n");
    }
}