//杭电OJ 1037
#include <stdio.h>
int main(){
    int heightOfUnderPass[3];
    int heightOfShipment = 168;
    int i;
    scanf("%d %d %d",&heightOfUnderPass[0],&heightOfUnderPass[1],&heightOfUnderPass[2]);
    getchar();
    for(i = 0;i < 3;i++){
        if(heightOfUnderPass[i] < 168){
            break;
        }
    }
    if(i == 3){
        printf("NO CRASH\n");
    }else{
        printf("CRASH %d\n",heightOfUnderPass[i]);
    }

}
