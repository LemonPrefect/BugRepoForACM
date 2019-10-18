#include <cstdio>
#include <cstdlib>
#include <cstring>
int main(){
    int *judgeExistArray;
    int *numArray;
    int quantityOfNum = 0;
    int numMax = 0;
    char str[100000];
    char revStr[10000];
    int i,j;
    scanf("%d",&quantityOfNum);
    numArray = (int*)calloc(quantityOfNum,sizeof(int));
    for(i = 0;i < quantityOfNum;i++){
        scanf("%d",&numArray[i]);
        if(numArray[i] > numMax){
            numMax = numArray[i];
        }
    }
    judgeExistArray = (int*)calloc(numMax,sizeof(int));
    for(i = quantityOfNum - 1,j = 0;i >= 0;i--){
        if(judgeExistArray[numArray[i]] != 1){
            judgeExistArray[numArray[i]] = 1;
            memset(revStr,0,sizeof(char)); 
            sprintf(revStr,"%d",numArray[i]);
            strrev(revStr);
            sprintf(str,(j == 0)?"%s%s":"%s %s",str,revStr);
            j++;
        } 
    }
    strrev(str);
    printf("%d\n%s",j,str);
    return 0;  
}
