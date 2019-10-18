//杭电OJ 1060
#include <cstdio>
#include <cstring>
#include <cstdlib>
__int64 np(__int64 a,__int64 b);
int main(){
    for(int i = 0;i < 101;i++){
        printf("#%d#%I64d#\n",i,np((__int64)i,(__int64)i));
    }
}






__int64 np(__int64 a,__int64 b){
    __int64 result = 1;
    while(b){
        if(b % 2 == 1){
            result = result * a;
        }
        a = a * a;
        b = b / 2;
    }
    return result;
}
