#include <cstdio>
#include <cstdlib>
#include <algorithm>
#define Y_MAX 807020306
double solution(double y);
double calculate(double x);
int main(){
    int timesToRun = 0;
    double y = 0.0;
    double calculate(double x);
    scanf("%d",&timesToRun);
    for(int i = 0;i < timesToRun;i++){
        scanf("%lf",&y);
        if(y < 6 || y > Y_MAX){
            printf("No solution!\n");
            continue;
        }
        printf("%.4lf\n",solution(y));
    }
}
double calculate(double x){
    return (8 * x * x * x * x) + (7 * x * x * x) + (2 * x * x) + (3 * x) + 6;
}
double solution(double y){
    double x[2] = {0,100};
    while(x[1] - x[0] > 1e-8){
        if(calculate((x[0] + x[1]) / 2) == y){
            return (calculate((x[0] + x[1]) / 2));
        }else{
            x[(calculate((x[0] + x[1]) / 2) > y)?1:0] = (x[0] + x[1]) / 2;
        }
    }
    return ((x[0] + x[1]) / 2);
}
