//杭电OJ 2630
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(){
    char** performer;
    int** time;
    int timesToRun = 0;
    int numOfPerformance = 0;
    int i,j;
    int timeTotal[3];
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%d",&numOfPerformance);
        getchar();
        performer = (char**)calloc(numOfPerformance,sizeof(char*));
        time = (int**)calloc(numOfPerformance,sizeof(int*));
        memset(timeTotal,0,sizeof(timeTotal));
        for(j = 0;j < numOfPerformance;j++){
            performer[j] = (char*)calloc(6,sizeof(char));
            time[j] = (int*)calloc(2,sizeof(int));
        }
        for(j = 0;j < numOfPerformance;j++){
            scanf("%s %d:%d",performer[j],&time[j][0],&time[j][1]);
            getchar();
        }
        for(j = 0;j < numOfPerformance;j++){
            if(strcmp(performer[j],"S.H.E") == 0 || strcmp(performer[j],"Jay") == 0 || strcmp(performer[j],"Elva") == 0 || strcmp(performer[j],"Jolin") == 0 || strcmp(performer[j],"Aska") == 0 || strcmp(performer[j],"Yoga") == 0){
                timeTotal[1] += time[j][0];
                timeTotal[2] += time[j][1];
            }
        }
        if(timeTotal[2] >= 60){
            timeTotal[1] += timeTotal[2] / 60;
            timeTotal[2] %= 60;
        }
        if(timeTotal[1] >= 60){
            timeTotal[0] += timeTotal[1] / 60;
            timeTotal[1] %= 60;
        }
        printf("Samuel will watch Channel[V] for %d hour(s),%d minute(s),%d second(s).\n",timeTotal[0],timeTotal[1],timeTotal[2]);
        free(performer);
        free(time);
    }
    return 0;

}