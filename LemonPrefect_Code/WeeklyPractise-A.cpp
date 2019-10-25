#include <cstdio>
#include <cstdlib>
int compareSort(const void* numA,const void *numB);
int main(){
    __int64 numInLine = 0;
    __int64 *numArray;
    int i,j;
    scanf("%I64d",&numInLine);
    numArray = (__int64*)calloc(numInLine,sizeof(__int64));
    for(i = 0;i < numInLine;i++){
        scanf("%I64d",&numArray[i]);
    }
    __int64 sumA = 0,sumB = 0,sumTotal = 0;
    qsort(numArray,numInLine,sizeof(__int64),compareSort);
    if(numInLine % 2 == 0){
        for(i = 0;i < numInLine / 2;i++){
            sumA += numArray[i];
        }
        for(i = numInLine - 1;i >= numInLine / 2;i--){
            sumB += numArray[i];
        }
        sumTotal = sumA * sumA + sumB * sumB;
    }else{
        for(i = 0;i < numInLine / 2;i++){
            sumA += numArray[i];
        }
        for(i = numInLine - 1;i > numInLine / 2;i--){
            sumB += numArray[i];
        }
        sumB += numArray[numInLine / 2 + 1];
        sumTotal = sumA * sumA + sumB * sumB;
    }
    printf("%I64d",sumTotal);

}
int compareSort(const void* numA,const void *numB){ //Sort from smaller to bigger
    return *(int*)numA - *(int*)numB;
}