//杭电OJ 1720
#include <stdio.h>
int main(){
    long long numHexA = 0xA,numHexB = 0xA;
    while(scanf("%I64X %I64X",&numHexA,&numHexB) != EOF){
    	if(numHexA + numHexB >= 0){
    		printf("%I64d\n",numHexA + numHexB);
		}else{
			printf("-%I64d\n",-(numHexA + numHexB));
		}
        
    }
    return 0;
}
