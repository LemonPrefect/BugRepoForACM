#include <algorithm>
#include <cstdio>
#include <cstdlib>
int main(){
    int doorStone = 0,doorGold = 0;
    int doorToldStone = 0;
    double probabilityA = 0.0;
    double probabilityB = 0.0;
    while(scanf("%d %d %d",&doorStone,&doorGold,&doorToldStone) != EOF){
        probabilityA = (double)doorGold / (double)(doorGold + doorStone);
        probabilityA *= (double)(doorGold - 1) / (double)(doorGold + doorStone - doorToldStone - 1);
        probabilityB = (double)doorStone / (double)(doorGold + doorStone);
        probabilityB *= (double)doorGold / (double)(doorGold + doorStone - 1 - doorToldStone);
        printf("%.5lf\n",probabilityA + probabilityB);
    }
    return 0;
}