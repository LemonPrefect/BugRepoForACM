#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
int insert(int left,int right,int value);
int swap(int *a,int *b);
int *differenceArray;
int main(){
    int timesToRun = 0;
    int numMovement = 0;
    int left = 0,right = 0,value = 1;
    scanf("%d",&timesToRun);
    for(int i = 0;i < timesToRun;i++){
        differenceArray = (int*)calloc(410,sizeof(int));
        scanf("%d",&numMovement);
        for(int j = 0;j < numMovement;j++){
            scanf("%d %d",&left,&right);
            if(left > right){
                swap(left,right);
            }
            if(right % 2){
                right++;
            }
            insert(left,right,value);
        }
        for(int j = 1;j < 410;j++){
            differenceArray[j] += differenceArray[j - 1];
        }
        int max = 0;
        for(int j = 0;j < 410;j++){
            if(differenceArray[j] > max){
                max = differenceArray[j];
            }
        }
        printf("%d\n",max * 10);
        free(differenceArray);
    }
    return 0;
}
int insert(int left,int right,int value){
    differenceArray[left - 1] += value;
    differenceArray[right] -= value;
    return 0;
}
int swap(int *a,int *b){
    int ex = *a;
    *a = *b;
    *b = ex;
    return 0;
}
