//杭电OJ 2044
#include <stdio.h>
int main(){
    __int64 numArray[60];
    int isolation = 0;
    int i,j;
    int timesToRun = 0;
    int startPosition = 0,EndPosition = 0;
    scanf("%d",&timesToRun);
    getchar();
    if(timesToRun != 0){
        numArray[0] = 0;
        numArray[1] = 1;
        numArray[2] = 2;
        numArray[3] = 3;
        for(i = 4;i < 60;i++){
            numArray[i] = numArray[i - 1] + numArray[i - 2];
        }
    }
    for(i = 0;i < timesToRun;i++){
        scanf("%d %d",&startPosition,&EndPosition);
        getchar();
        isolation = EndPosition - startPosition;
        printf("%lld\n",numArray[isolation]);
    }
    return 0;
}
