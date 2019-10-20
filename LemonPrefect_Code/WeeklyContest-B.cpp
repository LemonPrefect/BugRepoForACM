#include <cstdio>
#include <cstdlib>
int main(){
    __int64 question = 0;
    __int64 *questionArray;
    __int64 result = 0;
    __int64 i,j;
    scanf("%I64d",&question);
    questionArray = (__int64*)calloc(question + 1,sizeof(__int64));
    for(i = 1;i <= question;i++){
        scanf("%I64d",&questionArray[i]);
    }
    result += questionArray[1];
    for(i = 2;i <= question;i++){
        result += (questionArray[i] - 1) * (i - 1);
        result += questionArray[i];
    }
    printf("%I64d\n",result);

}