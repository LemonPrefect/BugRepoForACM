//杭电OJ 2631
#include <stdio.h>
#include <string.h>
int main(){
    int timesToRun = 0;
    int logTrue = 0;
    char haveTakenSport;
    char haveStayAGoodMood;
    int drankWater = 0;
    int i,j;
    int time[5];
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        memset(time,0,sizeof(time));
        logTrue = 0;
        scanf("%d:%d-%d:%d",&time[0],&time[1],&time[2],&time[3]);
        getchar();
        scanf("%d",&drankWater);
        getchar();
        scanf("%c",&haveTakenSport);
        getchar();
        scanf("%c",&haveStayAGoodMood);
        getchar();
        time[4] = ((24 - time[0] - 1) * 60 + (60 - time[1])) + (time[2] * 60 + time[3]);
        if(time[4] >= 420 && time[4] <= 480 && time[0] <= 24){
            logTrue++;
        }
        if(drankWater >= 8){
            logTrue++;
        }
        if(haveTakenSport == 'T'){
            logTrue++;
        }
        if(haveStayAGoodMood == 'T'){
            logTrue++;
        }
        if(logTrue == 4){
            printf("Health life,NeverGone you should keep doing!\n");
        }else{
            printf("NeverGone should pay attention to his health!\n");
        }
    }
    return 0;
}
