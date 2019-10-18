//杭电OJ 1097
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int numBase = 0;
    int numPower = 0;
    char *numCharBase;
    while(scanf("%d %d",&numBase,&numPower) != EOF){
    	numCharBase = (char*)calloc(1000,sizeof(char));
        itoa(numBase,numCharBase,10);
        numBase = (int)numCharBase[strlen(numCharBase) - 1] - '0';
        switch (numBase)
        {
        case 1:
            printf("1\n");
            break;
        case 2:
            switch (numPower % 4)
            {
            case 0:
                printf("6\n");
                break;
            case 1:
                printf("2\n");
                break;
            case 2:
                printf("4\n");
                break;
            case 3:
                printf("8\n");
                break;
            }
            break;
        case 0:
            printf("0\n");
            break;
        case 3:
            switch (numPower % 4)
            {
            case 0:
                printf("1\n");
                break;
            case 1:
                printf("3\n");
                break;
            case 2:
                printf("9\n");
                break;
            case 3:
                printf("7\n");
                break;
            }
            break;
        case 4:
            switch (numPower % 2)
            {
            case 0:
                printf("6\n");
                break;
            case 1:
                printf("4\n");
                break;
            }
            break;
        case 5:
            printf("5\n");
            break;
        case 6:
            printf("6\n");
            break;
        case 7:
            switch (numPower % 4)
            {
            case 0:
                printf("1\n");
                break;
            case 1:
                printf("7\n");
                break;
            case 2:
                printf("9\n");
                break;
            case 3:
                printf("3\n");
                break;
            }
            break;
        case 8:
            switch (numPower % 4)
            {
            case 0:
                printf("6\n");
                break;
            case 1:
                printf("8\n");
                break;
            case 2:
                printf("4\n");
                break;
            case 3:
                printf("2\n");
                break;
            }
            break;
        case 9:
            switch (numPower % 2)
            {
            case 0:
                printf("1\n");
                break;
            case 1:
                printf("9\n");
                break;
            }
            break;
        }
    }
    return 0;
}
