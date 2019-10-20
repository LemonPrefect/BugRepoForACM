//杭电OJ 2562
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char* numArray;
    char* swappedNumArray;
    int timesToRun = 0;
    int i,j;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        numArray = (char*)calloc(2000,sizeof(char));
        swappedNumArray = (char*)calloc(2000,sizeof(char));
        scanf("%s",numArray);
        getchar();
        for(j = 0;j < strlen(numArray);j+=2){
            swappedNumArray[j + 1] = numArray[j];
            swappedNumArray[j] = numArray[j + 1];
        }
        printf("%s\n",swappedNumArray);
    }
    return 0;
}