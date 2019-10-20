#include <stdio.h>
#include <math.h>
int main(){
    __int64 numInput = 0;
    __int64 *factorArray;
    int i,j;
    while(scanf("%I64d",&numInput) != EOF){
    	if(numInput == 0){
    		printf("10\n");
    		continue;
		}else if(numInput == 1){
			printf("1\n");
			continue;
		}
        factorArray = (__int64*)calloc(20,sizeof(__int64));
        for(i = 0;i <= 9 && (i == 0)?1:factorArray[i - 1] != 0;i++){
            for(j = 9;j > 1;j--){
                if(numInput % j == 0){
                    numInput /= j;
                  	factorArray[i] = j; 
                    break;
                }
            }
            
        }
        if(factorArray[0] == 0){
                printf("-1\n");
                continue;
        }
        if(numInput == 1){
        	for(j = i - 2;j >= 0;j--){
            printf("%I64d",factorArray[j]);
        	}
        	printf("\n");
		}else{
			printf("-1\n");
		}
       
    }
}
