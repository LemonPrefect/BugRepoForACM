//杭电OJ 2071
#include <stdio.h>
int main(){
    int timesToRun = 0;
    int i,j;
    double *heightArray;
    int numInLine = 0;
    double numMax = 0.0;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%d",&numInLine);
        heightArray = (double*)calloc(numInLine,sizeof(double));
        for(j = 0;j < numInLine;j++){
            scanf("%lf",&heightArray[j]);
        }
        numMax = heightArray[0];
        for(j = 1;j <= numInLine;j++){
            if(heightArray[j] > numMax){
                numMax = heightArray[j];
            }
        }
        printf("%.2lf\n",numMax);
    }
}
