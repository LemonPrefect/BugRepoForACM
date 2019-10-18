//杭电OJ 2070
#include <stdio.h>
int main(){
    int num;
    __int64 numArray[51];
    int i;
    numArray[0] = 0;
    numArray[1] = 1;
    for(i = 2;i <= 50;i++){
        numArray[i] = numArray[i - 1] + numArray[i - 2];
    }
    while(scanf("%d",&num) != EOF){
        if(num == -1){
            break;
        }
        printf("%I64d\n",numArray[num]);
    }
    return 0;
}
