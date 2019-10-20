//杭电OJ 2081
#include <stdio.h>
int main(){
    int numTelephoneNumber = 0;
    int i,j;
    char telephoneNumber[12];
    scanf("%d",&numTelephoneNumber);
    getchar();
    for(i = 0; i < numTelephoneNumber;i++){
        scanf("%s",telephoneNumber);
        getchar();
        printf("6%c%c%c%c%c\n",telephoneNumber[6],telephoneNumber[7],telephoneNumber[8],telephoneNumber[9],telephoneNumber[10]);
    }
    return 0;
}
