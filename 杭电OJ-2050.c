//杭电OJ-2050
#include <stdio.h>
int main(){
    __int64 numArray[10005];
    int i;
    int timesToRun = 0;
    int numOfLine = 0;
    scanf("%d",&timesToRun);
    getchar();
    if(timesToRun != 0){
        numArray[0] = 0;
        numArray[1] = 2;
        numArray[2] = 7;
        for(i = 3;i < 10001;i++){
            numArray[i] = numArray[i - 1] + 4 * (i - 1) + 1;
        }
    }
    for(i = 0;i < timesToRun;i++){
        scanf("%d",&numOfLine);
        getchar();
        printf("%lld\n",numArray[numOfLine]);
    }
    return 0;
}
