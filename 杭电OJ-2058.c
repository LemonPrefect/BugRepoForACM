//杭电OJ 2058
#include <stdio.h>
int main(){
    int rangeMax = 0;
    int sumExpected = 0;
    int i,j;
    int sumCalculated = 0;
    int rangeStart = 0,rangeEnd = 0;
    while(scanf("%d %d",&rangeMax,&sumExpected) != EOF){
        if(rangeMax == 0 && sumExpected == 0){
            break;
        }
        for(i = 1;i <= rangeMax;i++){
            sumCalculated = 0;
            for(j = i,rangeStart = j;j < rangeMax;j++){
                sumCalculated += j;
                if(sumCalculated == sumExpected){
                    rangeEnd = j;
                    printf("[%d,%d]\n",rangeStart,rangeEnd);
                    break;
                }else{
                    if(sumCalculated > sumExpected){
                        break;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}