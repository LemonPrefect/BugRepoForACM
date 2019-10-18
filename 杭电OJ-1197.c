//杭电OJ 1197
#include <stdio.h>
int main(){
    int num = 0;
    int i;
    int ex = 0;
    int resultDuodecimal = 0;
    int resultHexadecimal = 0;
    int resultDecimal = 0;
    for(i = 2992;i <= 9999;i++){
    	resultDuodecimal = 0;
    	resultHexadecimal = 0;
        resultDecimal = (i / 1000) + ((i % 1000) / 100) + ((i % 1000) % 100) / 10 + ((i % 1000) % 100) % 10;
        num = i;
		ex = num;
        while(num != 0){
            resultDuodecimal += num % 12;
            num /= 12;
        }
        num = ex;
         while(num != 0){
            resultHexadecimal += num % 16;
            num /= 16;
        }
        if(resultDecimal == resultDuodecimal && resultDuodecimal == resultHexadecimal){
            printf("%d\n",i);
        }
    }
    return 0;
}
