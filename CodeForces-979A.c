#include <stdio.h>
#include <stdlib.h>
int main(){
    __int64 person = 0;
    scanf("%I64d",&person);
    person++;
    if(person == 1){
        printf("0\n");
    }else if(person % 2 == 0){
        printf("%I64d\n",person / 2);
    }else{
        printf("%I64d\n",person);
    }
    return 0;
}
