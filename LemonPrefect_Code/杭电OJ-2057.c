//杭电OJ 2057
#include <stdio.h>
int main(){
    long long numHexA = 0xA,numHexB = 0xA;
    while(scanf("%I64X %I64X",&numHexA,&numHexB) != EOF){
    	if(numHexA + numHexB >= 0){
    		printf("%I64X\n",numHexA + numHexB);
		}else{
			printf("-%I64X\n",-(numHexA + numHexB));
		}
        
    }
    return 0;
}
