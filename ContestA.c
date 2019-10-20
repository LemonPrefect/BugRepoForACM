//Author : LemonPrefect
//Submission 1
#include <stdio.h>
int main(){
    int itemsToProcess = 0;
    int performer = 0;
    int employee = 0;
    int i,j;
    int result[3];
    scanf("%d",&itemsToProcess);
    getchar;
    for(i = 0;i < itemsToProcess;i++){
        result[0] = 1;
        result[1] = 1;
        result[2] = 1;
        scanf("%d %d",&employee,&performer);
        for(j = employee;j >= performer;j--){
            result[0] = result[0] * j;
            //printf("#%d %d\n",result[0],j);
        }
        for(j = performer;j >= 1;j--){
            result[1] = result[1] * j;
        }
    	result[2] = result[0] / result[1];
    	if(performer == 0){
        		printf("1\n");
			}else if(performer == employee){
				printf("1\n");
			}else{
				printf("%d\n",result[2]);
			}
    
    }
    return 0;
}
