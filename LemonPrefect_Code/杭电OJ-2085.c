//杭电OJ 2085
#include <stdio.h>
int main(){
    int microSecond = 0;
    int i,j;
    long long int temp;
    long long int numLowPowerProton = 0,numHighPowerProton = 0;
    while(scanf("%d",&microSecond) != EOF){
        if(microSecond == -1){
            break;
        }
        numHighPowerProton = 1;
        numLowPowerProton = 0;
        for(i = 0;i < microSecond;i++){
        	temp = numHighPowerProton;
            numHighPowerProton *= 3;
            numHighPowerProton += 2 * numLowPowerProton;
            numLowPowerProton += temp;
        }
        printf("%lld, %lld\n",numHighPowerProton,numLowPowerProton);
    }
}
