//杭电OJ 2092
#include <stdio.h>
#include <math.h>
int main(){
    int add = 0,by = 0;
    while(scanf("%d %d",&add,&by) != EOF){
        if(add == 0 && by == 0){
            break;
        }
        if(sqrt(pow(add,2) - 4 * by) == (int)sqrt(pow(add,2) - 4 * by)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
