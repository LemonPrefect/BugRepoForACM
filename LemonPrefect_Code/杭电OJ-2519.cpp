#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <ciso646>
__int64 Combine(__int64 a,__int64 b); 
int main(){
    int timesToRun = 0;
    int personSignUp = 0;
    int personNeeded = 0;
    int dividend = 0;
    int divisor = 0;
    __int64 result = 0;
    int i,j;
    scanf("%d",&timesToRun);
    for(i = 0;i < timesToRun;i++){
        scanf("%d %d",&personSignUp,&personNeeded);
        printf("%I64d\n",Combine(personSignUp,personNeeded));
    }   
}

__int64 Combine(__int64 a,__int64 b){
    __int64 i = 0,j = 0,k = 0;
    __int64 result = 1;
    __int64 tempDivisor = 1;
    if(a == 0){
        return -1;
    }
    if(b == 0){
        return 1;
    }
    for(i = 1;i <= b;i++){
        result = result * a;
        a--;
        if(result % tempDivisor == 0){
            result /= tempDivisor;
            tempDivisor = 1;
        }
        if(result % i != 0){
            tempDivisor *= i;
        }else{
            result /= i;
        }
    }
    return result;
}
