#include <algorithm>
#include <cstdio>
#include <cstdlib>
int main(){
    __int64 letterTotal = 0;
    __int64 letterK = 0;
    __int64 result[4] = {0,0,0,0};
    __int64 listArray[4] = {9,2,1,1};
    scanf("%I64d %I64d",&letterTotal,&letterK);
    if(letterK == 4){
        result[0] += (letterTotal * (letterTotal - 1) * (letterTotal - 2) * (letterTotal - 3)) / 24; //C4 1 / 
        result[0] *= listArray[0];
        result[1] += (letterTotal * (letterTotal - 1) * (letterTotal - 2)) / 6;
        result[1] *= listArray[1]; 
        result[2] += (letterTotal * (letterTotal - 1)) / 2;
        result[3] += 1;
    }else if(letterK == 3){
        result[0] += (letterTotal * (letterTotal - 1) * (letterTotal - 2)) / 6;
        result[0] *= listArray[1];
        result[1] += (letterTotal * (letterTotal - 1)) / 2;
        result[2] += 1;
    }else if(letterK == 2){
        result[0] += (letterTotal * (letterTotal - 1)) / 2;
        result[1] += 1;
    }else if(letterK == 1){
        result[0] += 1;
    }
    printf("%I64d\n",result[0] + result[1] + result[2] + result[3]);
}

//Dn = (n - 1)((D n-1) + (D n-2)) 
