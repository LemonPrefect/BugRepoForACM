////杭电OJ 2160
#include <stdio.h>
int main(){
    int day = 0;
    int timesToProcess = 0;
    int i,j;
    scanf("%d",&timesToProcess);
    getchar();
    for(i = 0;i < timesToProcess;i++){
        scanf("%d",&day);
        int pig[3] = {0,0,1};
        day -= 2; 
        for(j = 0;j <= day;j++){
            pig[0] = pig[1];
            pig[1] = pig[2];
            pig[2] = pig[1] + pig[0];
            pig[0] = 0;
        }
        printf("%d\n",(pig[1] + pig[2]));
    }
    return 0;
}