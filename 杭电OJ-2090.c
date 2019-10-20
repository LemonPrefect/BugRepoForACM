//杭电OJ 2090
#include <stdio.h>
int main(){
	char name[200];
    double sum = 0;
    double quantity = 0;
    double price = 0;
    while(scanf("%s %lf %lf",name,&quantity,&price) != EOF){
        sum += quantity * price;
    }
    printf("%.1lf\n",sum);
    return 0;
}
