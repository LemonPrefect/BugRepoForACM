//论在vjudge随手开小号debug的危害--->AC了登录主账号没法提交，太难了
//Author:Ginzoc Kwok
//首次提交的zaxscdvf是咱的小号QAQ
#include <stdio.h>
int main(){
    __int64 timesToRun = 0;
    __int64 candyTypes = 0;
    __int64 i,j;
    __int64 candy;
    __int64 candySumWithoutMax = 0;
    __int64 candyMax = 0;
    scanf("%I64d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        candyMax = 0;
        candySumWithoutMax = 0;
        scanf("%I64d",&candyTypes);
        for(j = 0;j < candyTypes;j++){
            scanf("%I64d",&candy);
            if(candy > candyMax){
                candyMax = candy;
            }
            candySumWithoutMax += candy;
        }
        candySumWithoutMax -= candyMax;
        if(candySumWithoutMax < candyMax - 1){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }
    return 0;
}
