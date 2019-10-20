#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main(){
    __int64 i;
    char *str;
    int *cStr;
    str = (char*)calloc(500,sizeof(char));
    cStr = (int*)calloc(26,sizeof(int));
    scanf("%s",str);
    for(i = 0;i < strlen(str);i++){
        cStr[str[i] - 'a']++;
    }
    int max = 0;
    int sum = 0;
    int sumWithoutMax = 0;
    for(i = 0;i < 26;i++){
        sum += cStr[i];
        if(max < cStr[i]){
            max = cStr[i];
        }
    }
    sumWithoutMax = sum - max;
    if(sumWithoutMax < max - 1){
        printf("Impossible\n");
    }else{
        printf("Possible\n");
    }
    return 0;
}