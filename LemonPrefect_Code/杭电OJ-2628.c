//杭电OJ 2628
#include <stdio.h>
int main(){
    int timesToRun = 0;
    int i;
    double averagePerYear = 0;
    double averagePerWeek = 0;
    scanf("%d",&timesToRun);
    for(i = 0;i < timesToRun;i++){
        averagePerWeek = 0;
        averagePerYear = 0;
        scanf("%lf %lf",&averagePerWeek,&averagePerYear);
        if(averagePerWeek * 52 >= averagePerYear){
            printf("Oh,Samuel's hope will come true,thanks to the DcSLs.\n");
        }else{
            printf("Unfortunately,Samuel's hope will not come true,more tourists are welcomed!\n");
        }
    }
    return 0;
}