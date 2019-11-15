#include <cstdio>
#include <cstdlib>
int compareSort(const void* numA,const void *numB); 
int main(){
    int numInLine = 0;
    int numToOutPut = 0;
    __int64 *numArray;
    while(scanf("%d %d",&numInLine,&numToOutPut) != EOF){
        numArray = (__int64*)calloc(numInLine,sizeof(__int64));
        for(int i = 0;i <numInLine;i++){
        	scanf("%I64d",&numArray[i]);
		}
        qsort(numArray,numInLine,sizeof(__int64),compareSort);
        for(int i = numInLine - 1;i > (numInLine - 1 - numToOutPut);i--){
            printf("%I64d",numArray[i]);
            if(i != (numInLine - 1 - numToOutPut) - 1){
                printf(" ");
            }
        }
        printf("\n");
    }
}
int compareSort(const void* numA,const void *numB){ 
    return *(int*)numA - *(int*)numB;
}
