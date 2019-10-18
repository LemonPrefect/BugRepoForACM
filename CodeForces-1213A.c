//CodeForces 1213A
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int numOfChip = 0;
    int* chip;
    int i;
    int numOdd = 0,numEven = 0;
    scanf("%d",&numOfChip);
    getchar();
    chip = (int*)calloc(numOfChip,sizeof(int));
    for(i = 0;i < numOfChip;i++){
        scanf("%d",&chip[i]);
        if(chip[i] % 2 == 0){
            numEven++;
        }else{
            numOdd++;
        }
    }
    printf("%d\n",(numOdd < numEven)?numOdd:numEven);
}