#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *BigIntegerPlus(char *a,char *b);
int main(){
    char *num;
    char *result;
    result = (char*)calloc(1070,sizeof(char));
    num = (char*)calloc(150,sizeof(char));
    memset(result,'\0',sizeof(char) * 1070);
    memset(num,'\0',sizeof(char) * 150);

    scanf("%s",num);
    int flag = 0;
    while(!(strlen(num) == 1 && num[0] == '0')){
        if(flag == 0){
            strcpy(result,num);
            flag++;
            continue;
        }
        scanf("%s",num);
        strcpy(result,BigIntegerPlus(result,num));
    }
    printf("%s\n",result);
    return 0;
}

char *BigIntegerPlus(char *a,char *b){
    int i;
    int lengthDiffer = 0;
    char *result;
    int tempAddResult = 0;
    char *numA;
    char *numB;
    //Digits differ less than 100
    numA = (char*)calloc(strlen(a) + 100,sizeof(char));
    numB = (char*)calloc(strlen(b) + 100,sizeof(char));
    memset(numA,'\0',sizeof(numA));
    memset(numB,'\0',sizeof(numB));
    strcpy(numA,a);
    strcpy(numB,b);
    lengthDiffer = abs(strlen(numA) - strlen(numB));
    //Align the two numbers by padding leading zeros
    if(strlen(numA) > strlen(numB)){
       for(i = strlen(numB) - 1;i >= 0;i--){
           numB[i + lengthDiffer] = numB[i];
       }
       for(i = 0;i < lengthDiffer;i++){
           numB[i] = '0';
       }
    }else if(strlen(numA) < strlen(numB)){
        for(i = strlen(numA) - 1;i >= 0;i--){
           numA[i + lengthDiffer] = numA[i];
       }
       for(i = 0;i < lengthDiffer;i++){
           numA[i] = '0';
       }
    }
    //Padding the first zero for carry
    for(i = strlen(numA) - 1; i >= 0;i--){
        numA[i + 1] = numA[i];
        numB[i + 1] = numB[i];
    }
    numA[0] = '0';
    numB[0] = '0';
    //Add two numbers
    result = (char*)calloc(strlen(numA) + 1050,sizeof(char));
    memset(result,48,sizeof(char) * strlen(numA));//Padding '0'(int 48),prepare fo the addition
    for(i = strlen(numA) - 1;i > 0;i--){
        tempAddResult = numA[i] - '0' + numB[i] - '0';
        tempAddResult += (result[i] - '0');
        if(tempAddResult >= 10){
            result[i] = (tempAddResult % 10) + '0';
            result[i - 1] = (tempAddResult / 10) + '0';
        }else{
            result[i] = (tempAddResult % 10) + '0';
        }
    }
    //Delete leading zero
    if(result[0] == '0'){
        sscanf(result,"0%s",result);
    }
    return result;
}