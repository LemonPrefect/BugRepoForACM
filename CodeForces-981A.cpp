#include <cstdio>
#include <cstring>
int main(){
    char strOriginal[60];
    char strReversed[60];
    char strProcessed[60];
    char strProcessedReversed[60];
    scanf("%s",strOriginal);
    strcpy(strReversed,strOriginal);
    strrev(strReversed);
    if(strcmp(strReversed,strOriginal) == 0){
        strOriginal[strlen(strOriginal) - 1] = '\0'; 
        strncpy(strProcessed,strOriginal,strlen(strOriginal) + 2);
        strcpy(strProcessedReversed,strProcessed);
        strrev(strProcessedReversed);
        if(strcmp(strProcessed,strProcessedReversed) != 0){
            printf("%d\n",strlen(strOriginal));
            return 0;
        }else{
            printf("0\n");
            return 0;
        }
    }else{
        printf("%d\n",strlen(strOriginal));
    }
}