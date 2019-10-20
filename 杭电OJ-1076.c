//杭电OJ 1076
#include <stdio.h>
int main(){
    int timesToRun = 0;
    long long int year = 0;
    long long int times = 0;
    int i;
    int yearCount = 0;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%lld %lld",&year,&times);
        yearCount = 0;
        while(yearCount < times){
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
                yearCount++;
            }
            year++;
        }
        printf("%lld\n",year - 1);
    }
}
