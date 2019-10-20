//杭电OJ 1062
#include <stdio.h>
#include <string.h>
int main(){
    int timesToRun = 0;
    int i,j,k;
    int logPre = 0;
    char word[1000];
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
    	memset(word, 0,1000);
        gets(word);
        int strLength = strlen(word);
        word[strlen(word)] = ' ';
        logPre = 0;
        for(j = 0;j < strlen(word);j++){
            if(word[j] == ' '){
                for(k = j - 1;k >= logPre;k--){
                    putchar(word[k]);
                }
                logPre = j + 1;
                if(j != strlen(word) - 1){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
