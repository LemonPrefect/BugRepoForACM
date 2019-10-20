//杭电OJ 2053
#include <stdio.h>
int main(){
    int lamp = 0;
    int i,j;
    int switchRound = 0;
    while(scanf("%d",&switchRound) != EOF){
    	lamp = 0;
        if(switchRound == 0){
        	lamp = 0;
        	printf("%d\n",lamp); 
        	continue;
		}
        for(i = 1;i <= switchRound;i++){
            if(switchRound % i == 0){
                lamp = !lamp; 
            } 
        }
        printf("%d\n",lamp); 
    }
    return 0;
}
