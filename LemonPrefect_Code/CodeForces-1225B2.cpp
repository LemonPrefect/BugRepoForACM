#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
    int timesToRun = 0;
    int numInLines = 0;
    int numMaxInArray = 0;
    int range = 0;
    int *numArray;
    int *checkArray;
    scanf("%d",&timesToRun);
    for(int i = 0;i < timesToRun;i++){
        checkArray = (int*)calloc(1000010,sizeof(int));
        scanf("%d %d %d",&numInLines,&numMaxInArray,&range);
        numArray = (int*)calloc(numInLines,sizeof(int));
        for(int j = 0;j < numInLines;j++){
            scanf("%d",&numArray[j]);
        }
        int flag = 0;
        int subscriptionMin = 2147483647;
        for(int j = 0,k = 0;j < numInLines;j++){
            if(j < range){
                if(checkArray[numArray[j]] == 0){
                    checkArray[numArray[j]]++;
                    flag++;
                }else{
                    checkArray[numArray[j]]++;
                }
            }else{
                checkArray[numArray[j - range]]--;
                if(checkArray[numArray[j - range]] == 0){
                    flag--;
                }
                if(checkArray[numArray[j]] == 0){
                    checkArray[numArray[j]]++;
                    flag++;
                }else{
                    checkArray[numArray[j]]++;
                }
            }
            if(flag < subscriptionMin && j >= range - 1){
                subscriptionMin = flag;
            }
        }
        printf("%d\n",subscriptionMin);
        free(numArray);
        free(checkArray);
    }
}
