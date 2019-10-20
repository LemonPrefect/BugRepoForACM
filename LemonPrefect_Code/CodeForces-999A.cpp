#include <cstdio>
#include <iostream>
#include <cstdlib>
int main(){
    int numProblem = 0;
    int abilityOfMishka = 0;
    int *problemListArray;
    int i,j;
    scanf("%d %d",&numProblem,&abilityOfMishka);
    problemListArray = (int*)calloc(numProblem,sizeof(int));
    for(i = 0;i < numProblem;i++){
        scanf("%d",&problemListArray[i]);
    }
    for(i = 0,j = 0;i < numProblem;i++){
        if(problemListArray[i] <= abilityOfMishka){
            j++;
        }else{
            break;
        }
    }
    if(j == numProblem){
        printf("%d\n",numProblem);
        return 0;
    }else{
        for(i = numProblem - 1;i >= 0;i--){
            if(problemListArray[i] <= abilityOfMishka){
                j++;
            }else{
                break;
            }
        }
        printf("%d\n",j);
        return 0;
    }
}