//杭电OJ 2041
#include <stdio.h>
int main(){
    int timesToRun = 0;
    __int64 steps[50];
    int step = 0;
    int i;
    steps[0] = 1;
    steps[1] = 2;
    for(i = 2;i < 50;i++){
        steps[i] = steps[i - 2] + steps[i - 1];
    }
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%d",&step);
        step-=2;
        printf("%d\n",steps[step]);
    }
    return 0;
}