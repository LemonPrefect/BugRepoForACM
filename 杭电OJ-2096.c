//杭电OJ 2096
#include <stdio.h>
int main(){
    double addNumA = 0,addNumB = 0;
    double sum = 0;
    int i;
    int timesToRun;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
    	scanf("%lf %lf",&addNumA,&addNumB);
        addNumA /= 100;
        addNumB /= 100;
        sum = ((addNumA + addNumB) - (int)(addNumA + addNumB)) * 100;
        printf("%.0lf\n",sum);
    }
    return 0;


}
