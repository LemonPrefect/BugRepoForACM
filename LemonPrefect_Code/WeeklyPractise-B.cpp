#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
int main(){
    int timesToRun = 0;
    int *X;
    int *Y;
    int *Log;
    int numLines = 0;
    int i,j,k;
    scanf("%d",&timesToRun);
    for(i = 0;i < timesToRun;i++){
        X = (int*)calloc(700,sizeof(int));
        Y = (int*)calloc(700,sizeof(int));
        Log = (int*)calloc(400,sizeof(int));
        scanf("%d",&numLines);
        for(j = 0;j < numLines;j++){
            scanf("%d %d",&X[j],&Y[j]);
            int biggerNum = (X[j] > Y[j])?X[j]:Y[j];
            int smallerNum = (Y[j] > X[j])?X[j]:Y[j];
            if(biggerNum % 2 == 1){
                    biggerNum++;
                }
            for(k = smallerNum;k <= biggerNum;k++){
                Log[k]++;
            }
        }
        int max = 0;
        for(j = 0;j < 400;j++){
            if(Log[j] > max){
                max = Log[j];
            }
        }
        printf("%d\n",max * 10);

    }
}
