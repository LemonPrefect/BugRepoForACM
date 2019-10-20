//杭电OJ 1002
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char numA[10001];
    char numB[10001];
    char numAOriginal[10001];
    char numBOriginal[10001];
    char result[10020];
    int timesToRun = 0;
    int lengthDiffer = 0;
    int tempAddResult = 0;
    int i,j;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        memset(numA,0,sizeof(numA));
        memset(numB,0,sizeof(numB));
        memset(result,0,sizeof(result));
        memset(numAOriginal,0,sizeof(numAOriginal));
        memset(numBOriginal,0,sizeof(numBOriginal));
        scanf("%s %s",numA,numB);
        strcpy(numAOriginal,numA);
        strcpy(numBOriginal,numB);
        if(strlen(numA) > strlen(numB)){
            lengthDiffer = strlen(numA) - strlen(numB);
            for(j = strlen(numB) - 1;j >= 0;j--){
                numB[j + lengthDiffer] = numB[j];
            }
            for(j = 0;j < lengthDiffer;j++){
                numB[j] = '0';//padding the leading zeros for the smaller number
            }
        }else if(strlen(numB) > strlen(numA)){
            lengthDiffer = strlen(numB) - strlen(numA);
            for(j = strlen(numA) - 1;j >= 0;j--){
                numA[j + lengthDiffer] = numA[j];
            }
            for(j = 0;j < lengthDiffer;j++){
                numA[j] = '0';//padding the leading zeros for the smaller number
            }
        }
        //padding an extra zero at the first position
        for(j = strlen(numA) - 1; j >= 0;j--){
            numA[j + 1] = numA[j];
            numB[j + 1] = numB[j];
        }
        numA[0] = '0';
        numB[0] = '0';
        memset(result,48,sizeof(char) * strlen(numA));//padding the zero for the array result 
        for(j = strlen(numA) - 1;j > 0;j--){
            tempAddResult = numA[j] - '0' + numB[j] - '0';
            tempAddResult += (result[j] - '0');
            if(tempAddResult >= 10){
                result[j] = (tempAddResult % 10) + '0';
                result[j - 1] = (tempAddResult / 10) + '0';
            }else{
                result[j] = (tempAddResult % 10) + '0';
            }
        }
        if(result[0] == '0'){
            sscanf(result,"0%s",result);
        }
        printf("Case %d:\n%s + %s = %s\n",i + 1,numAOriginal,numBOriginal,result);
        if(i != timesToRun - 1){
            printf("\n");
        }
    }
    return 0;
}
