//杭电OJ 2535
#include <stdio.h>
#include <stdlib.h>
int main(){
    int stateInAmerica = 0;
    int* peopleInStates;
    int i,j;
    int ex;
    int sum = 0;
    while(scanf("%d",&stateInAmerica) != EOF){
        if(stateInAmerica == 0){
            break;
        }
        sum = 0;
        getchar();
        peopleInStates = (int*)calloc(stateInAmerica,sizeof(int));
        for(i = 0;i < stateInAmerica;i++){
            scanf("%d",&peopleInStates[i]);
        }
        for(i = 0;i < stateInAmerica;i++){
            for(j = 0;j < stateInAmerica - 1;j++){
                if(peopleInStates[j + 1] < peopleInStates[j]){
                    ex = peopleInStates[j + 1];
                    peopleInStates[j + 1] = peopleInStates[j];
                    peopleInStates[j] = ex;
                }
            }
        }
        //stateInAmerica = (stateInAmerica % 2 == 0)?(stateInAmerica / 2):((stateInAmerica + 1) / 2);
        //for(i = 0;i < stateInAmerica;i++){
            //peopleInStates[i] = (peopleInStates[i] % 2 == 0)?(peopleInStates[i] / 2 + 1):((peopleInStates[i] + 1) / 2);
        //}
        for(i = 0;i < stateInAmerica / 2 + 1;i++){
            sum += peopleInStates[i] /2 + 1;
        }
        printf("%d\n",sum);
    }
    return 0;    

}
