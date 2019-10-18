//杭电OJ 2040
#include <stdio.h>
int main(){
    int numA = 0,numB = 0;
    int timesToRun = 0;
    int tempResult = 0;
    int i,j;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%d %d",&numA,&numB);
        tempResult = 0;
        for(j = 1;j <= numA / 2;j++){
            if(numA % j == 0){
                tempResult += j;
            }
        }
        if(tempResult == numB){
            tempResult = 0;
            for(j = 1;j <= numB / 2;j++){
                if(numB % j == 0){
                    tempResult += j;

                }
            }
            if(tempResult == numA){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            printf("NO\n");
        }
    }
    return 0;
}