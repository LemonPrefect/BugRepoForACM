#include <cstdio>
#include <cstring>
#include <cstdlib>
int *differenceArray;
int *numArray;
int insert(int left,int right,int value);
int main(){
    int numInLine = 0;
    int timesToProcess = 0;
    scanf("%d %d",&numInLine,&timesToProcess);
    numArray = (int*)calloc(numInLine,sizeof(int));
    differenceArray = (int*)calloc(numInLine,sizeof(int));
    for(int i = 0;i < numInLine;i++){
        scanf("%d",&numArray[i]);
        if(i == 0){
            differenceArray[i] = numArray[i];
        }else{
            differenceArray[i] = numArray[i] - numArray[i - 1];
        }
    }
    int left = 0,right = 0,value = 0;
    for(int i = 0;i < timesToProcess;i++){
        scanf("%d %d %d",&left,&right,&value);
        insert(left,right,value);
    }
    for(int i = 0;i < numInLine;i++){
        if(i != 0){
            differenceArray[i] += differenceArray[i - 1];
        }
        if(i != numInLine - 1){
            printf("%d ",differenceArray[i]);
        }else{
            printf("%d",differenceArray[i]);
        }
         
    }
}
int insert(int left,int right,int value){
    differenceArray[left - 1] += value;
    differenceArray[right] -= value;
}