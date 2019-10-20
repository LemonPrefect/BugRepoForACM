//杭电OJ 2627
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char *isAccused;
    int *moneyGetIlligally;
    int timesToRun = 0;
    int moneySum = 0;
    int accuseSum = 0;
    int eventSum = 0;
    int i,j;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        accuseSum = 0;
        moneySum = 0;
        scanf("%d",&eventSum);
        getchar();
        isAccused = (char *)calloc(eventSum,sizeof(char));
        moneyGetIlligally = (int *)calloc(eventSum,sizeof(int));
        scanf("%s",isAccused);
        getchar();
        for(j = 0;j < eventSum;j++){
            scanf("%d",&moneyGetIlligally[j]);
        }
        for(j = 0;j < eventSum;j++){
            if(isAccused[j] == '1'){
                moneySum += moneyGetIlligally[j];
                accuseSum++;
            }
        }
        if(moneySum == 0){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",0,0);
        }else if(moneySum > 0 && moneySum < 20){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",accuseSum,3);
        }else if(moneySum >= 20 && moneySum < 30){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",accuseSum,5);
        }else if(moneySum >= 30 && moneySum < 40){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",accuseSum,10);
        }else if(moneySum >= 40 && moneySum < 50){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",accuseSum,15);
        }else if(moneySum >= 50 && moneySum < 60){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",accuseSum,20);
        }else if(moneySum >= 60 && moneySum < 70){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",accuseSum,25);
        }else if(moneySum >= 70 && moneySum < 80){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",accuseSum,30);
        }else if(moneySum >= 80 && moneySum < 90){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",accuseSum,35);
        }else if(moneySum > 90){
            printf("Samuel was accused with %d case(s),and he will stay in the prison for %d year(s).\n",accuseSum,40);
        }
    }
    return 0;
}