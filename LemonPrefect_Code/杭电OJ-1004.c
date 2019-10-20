//杭电OJ 1004
#include <stdio.h>
#include <string.h>
int main(){
    int i,j;
    int numBalloon = 0;
    char colourBalloon[1000][16];
    int numColourBalloon[1000];
    int numMax = 0;
    int logMax = 0;
    while(scanf("%d",&numBalloon) != EOF){
    	if(numBalloon == 0){
    		break;
		}
    	logMax = 0;
    	numMax = 0;
        memset(colourBalloon,0,sizeof(colourBalloon));
        memset(numColourBalloon,0,sizeof(numColourBalloon));
        for(i = 0; i < numBalloon;i++){
            scanf("%s",colourBalloon[i]);
        }
        for(i = 0;i < numBalloon;i++){
            if(i == 0){
                numColourBalloon[0] = 1;
                continue;
            }
            for(j = i;j >= 0;j--){
                if(strcmp(colourBalloon[j],colourBalloon[i]) == 0){
                    numColourBalloon[i] += 1;
                }
            }
        }
        for(i = 0;i < numBalloon;i++){
            if(numColourBalloon[i] > numMax){
                numMax = numColourBalloon[i];
                logMax = i;
            }
        }
        printf("%s\n",colourBalloon[logMax]);

    }
    return 0;
}
