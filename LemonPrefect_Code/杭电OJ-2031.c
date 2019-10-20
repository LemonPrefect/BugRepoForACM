//杭电OJ 2031
#include <stdio.h>
int main(){
    int remainderArray[100000];
    char transformArray[17] = "0123456789ABCDEF";
    int numInput = 0;
    int radix = 0;
    int i,j;
    int minus = 0;
    while(scanf("%d %d",&numInput,&radix) != EOF){
        memset(remainderArray,0,sizeof(remainderArray));
        minus = 0;
        i = 0;
        if(numInput < 0){
            numInput = abs(numInput);
            minus = 1;
        }
        if(numInput <= radix){
            (minus == 0)?printf("%c\n",transformArray[numInput]):printf("-%c\n",transformArray[numInput]);
            continue;
        }
        while(numInput > radix){
            remainderArray[i] = numInput % radix;
            numInput /= radix;
            i++;
        }
        remainderArray[i] = numInput;
        if(minus == 1){
            printf("-");
        }
        for(j = i;j >= 0;j--){
            printf("%c",transformArray[remainderArray[j]]);
        }
        printf("\n");
    }
    return 0;
}