//51Nod 1003
#include <stdio.h>
int main(){
    __int64 num;
    __int64 result;
    while(scanf("%I64d",&num) != EOF){
        result = 0;
        while(num){
            result += num / 5;
            num /= 5;
        }
        printf("%I64d\n",result);
    }
}