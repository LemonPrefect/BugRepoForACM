//杭电OJ 2626
#include <stdlib.h>
int main(){
    int timesToRun = 0;
    int num = 0;
    int i;
    scanf("%d",&timesToRun);
    getchar();
    for(i = 0;i < timesToRun;i++){
        scanf("%d",&num);
        switch (num)
        {
        case 13:
            printf("Samuel will take test.\n");
            break;
        case 12:
            printf("Samuel will go home.\n");
            break;
        case 11:
            printf("Samuel will stay at home.\n");
            break;
        case 10:
            printf("Samuel will buy clothes.\n");
            break;
        case 9:
            printf("Samuel will buy food.\n");
            break;
        case 8:
            printf("Samuel will stay at home.\n");
            break;
        case 7:
            printf("Samuel will visit teachers.\n");
            break;
        case 6:
            printf("Samuel will go to KTV.\n");
            break;
        case 5:
            printf("Samuel will meet friends.\n");
            break;
        case 4:
            printf("Samuel will go to movies.\n");
            break;
        case 3:
            printf("Samuel will stay at home.\n");
            break;
        case 2:
            printf("Samuel will decorate.\n");
            break;
        case 1:
            printf("Samuel will decorate.\n");
            break;
        case 0:
            printf("Samuel will go out.\n");
            break;
        case -1:
            printf("Samuel will be in the park.\n");
            break;
        case -2:
            printf("Samuel will stay at home.\n");
            break;
        case -3:
            printf("Samuel will visit relative.\n");
            break;
        case -4:
            printf("Samuel will visit relative.\n");
            break;
        case -5:
            printf("Samuel will stay at home.\n");
            break;
        case -6:
            printf("Samuel will prepare dinner.\n");
            break;
        }
    }
    return 0;
}