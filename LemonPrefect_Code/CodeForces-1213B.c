//CodeForces 1213B
#include <stdio.h>
#include <stdlib.h>
int main(){
    int timesToProcess = 0;
    int i,j,k;
    __int64* priceArray;
    int lengthOfPriceArray = 0;
    int logDays = 0;
    scanf("%d",&timesToProcess);
    getchar();
    for(i = 0;i < timesToProcess;i++){
        logDays = 0;
        scanf("%d",&lengthOfPriceArray);
        getchar();
        priceArray = (__int64*)calloc(lengthOfPriceArray,sizeof(__int64));
        for(j = 0;j < lengthOfPriceArray;j++){
            scanf("%d",&priceArray[j]);
        }
        getchar();
        for(j = 0;j < lengthOfPriceArray;j++){
            for(k = j + 1;k < lengthOfPriceArray;k++){
                if(priceArray[k] < priceArray[j]){
                    logDays++;
                    break;
                }
            }
        }
        printf("%d\n",logDays);
    }
}