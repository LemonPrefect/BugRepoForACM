//CodeForces 1117A
#include <stdio.h>
#include <stdlib.h> 
int main(){
    __int64 *numArray;
    __int64 max = -1;
    __int64 i,j;
    __int64 numInLine = 0;
    __int64 flagTemp = 0;
    __int64 flag = 0;
    while(scanf("%d",&numInLine) != EOF){
        max = -1;
        numArray = (__int64*)calloc(numInLine + 1,sizeof(__int64));
        for(i = 0;i < numInLine;i++){
            scanf("%d",&numArray[i]);
            if(numArray[i] > max){
                max = numArray[i];
            }
        }
        numArray[numInLine] = -1;
        flag = 0;
        flagTemp = 0;
        for(i = 0;i <= numInLine;i++){
            if(numArray[i] == max){
                flagTemp++;
            }else{
                flag = (flag < flagTemp)?flagTemp:flag;
                flagTemp = 0;
            }
        }
        printf("%d\n",flag);
    }

}
