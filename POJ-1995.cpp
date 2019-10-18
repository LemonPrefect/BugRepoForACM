//POJ 1995
#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib> 
using namespace std;
__int64 np(__int64 a,__int64 b,__int64 modNum);
int main(){
    int timesToRun = 0;
    __int64 numMod = 0;
    __int64 numInLine = 0;
    __int64 *numArray;
    __int64 *powerArray;
    __int64 sum = 0;

    int i,j;
    scanf("%d",&timesToRun);
    for(i = 0;i < timesToRun;i++){
        sum = 0;
        scanf("%I64d%I64d",&numMod,&numInLine);
        numArray = (__int64*)calloc(numInLine,sizeof(__int64));
        powerArray = (__int64*)calloc(numInLine,sizeof(__int64));
        for(j = 0;j < numInLine;j++){
            scanf("%I64d %I64d",&numArray[j],&powerArray[j]);
            numArray[j] = np(numArray[j],powerArray[j],numMod);
            sum += numArray[j];
        }
        sum %= numMod;
        printf("%I64d\n",sum);
    }
}
__int64 np(__int64 a,__int64 b,__int64 modNum){
    __int64 result = 1;
    while(b){
        if(b % 2 == 1){
            result = result * a % modNum;
        }
        a = a * a % modNum;
        b = b / 2;
    }
    return result;
}
