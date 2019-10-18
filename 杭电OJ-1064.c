//杭电OJ 2030
#include <stdio.h>
int main(){
    double balance = 0;
    double total = 0;
    int i;
    for(i = 0;i < 12;i++){
        scanf("%lf",&balance);
        total += balance;
    }
    printf("$%.2lf\n",total / 12.0);
    return 0;
}
