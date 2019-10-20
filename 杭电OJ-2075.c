//杭电OJ 2075
#include <stdio.h>
int main(){
    int timesToRun = 0;
    long long int numA = 0,numB = 0;
    int i,j;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%lld %lld",&numA,&numB);
        if(numA % numB == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}