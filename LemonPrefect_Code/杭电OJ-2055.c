//杭电OJ 2055
#include <stdio.h>
int main(){
    int timesToRun = 0;
    int y = 0;
    char x = 'a';
    int i,j;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%c %d",&x,&y);
        getchar();
        if(x >= 65 && x <= 90){
            printf("%d\n",x - 'A' + y + 1);
        }else if(x >= 97 && x <= 122){
            printf("%d\n",(x - 'a' + 1) * (-1) + y);
        }
    }
    return 0;
}
