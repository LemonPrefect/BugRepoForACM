//51Nod 1082
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int JudgeSevenRelated(__int64 num);
int main(){
    //__int64 array[10000] = {0,1,5,14};
    __int64 i,j;
    __int64 *array;
    int timesToRun = 0;
    __int64 num = 0;
    array = malloc(sizeof(__int64) * 1000060);
    array[0] = 0;
    array[1] = 1;
    array[2] = 5;
    array[3] = 14;
    for(i = 3;i < 1000060;i++){
        if(JudgeSevenRelated(i) == 1){
            array[i] = array[i - 1];
        }else{
            array[i] = array[i - 1] + (i * i);
        }
    }
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%I64d",&num);
        printf("%I64d\n",array[num]);
    }
    
}
int JudgeSevenRelated(__int64 num){
    __int64 ex = 0;
    if(num % 7 == 0){
        return 1;
    }
    ex = num % 10;
    while(num){
        if(ex == 7){
            return 1;
        }else{
            num /= 10;
            ex = num % 10;
        }
    }
    return 0;
}
