//杭电OJ 1049
#include <stdio.h>
int main(){
    int heightClimbUpPerRound = 0;
    int heightSlideDownPerRound = 0;
    int heightOfTheWell = 0;
    int i,j;
    int logHeight = 0;
    int logTime = 0;
    while(scanf("%d %d %d",&heightOfTheWell,&heightClimbUpPerRound,&heightSlideDownPerRound) != EOF){
        if(heightOfTheWell == 0){
            break;
        }
        logHeight = 0;
        logTime = 0;
        while(logHeight < heightOfTheWell){
            logHeight += heightClimbUpPerRound;
            logTime++;
            if(logHeight < heightOfTheWell){
                logHeight -= heightSlideDownPerRound;
                logTime++;
            }
        }
        printf("%d\n",logTime);
    }
    return 0;
}