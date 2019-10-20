#include <cstdio>
#include <algorithm>
int gcd(int a,int b); 
int main(){
    int *arrayA;
    int *arrayB;
    int *arrayLog;
    int numInLines = 0;
    int i,j;
    while(scanf("%d",&numInLines) != EOF){
        arrayA = (int*)calloc(numInLines,sizeof(int));
        arrayB = (int*)calloc(numInLines,sizeof(int));
        arrayLog = (int*)calloc(numInLines,sizeof(int));
        for(i = 0;i < numInLines;i++){
            scanf("%d %d",&arrayA[i],&arrayB[i]);
        }
        for(i = 0;i < numInLines;i++){
            printf("##%d %d##\n",arrayA[i],arrayB[i]);
        }
        //numInLines = i;
        for(i = 0;i < numInLines;i++){
            if(arrayA[i] == 0 && arrayB[i] != 0){
                arrayB[i] = 1;
                continue;
            }else if(arrayB[i] == 0 && arrayA[i] != 0){
                arrayA[i] = 1;
                continue;
            }else if(arrayA[i] == arrayB[i] && arrayB[i] == 0){
                continue;
            }else{
                arrayA[i] /= gcd(arrayA[i],arrayB[i]);
                arrayB[i] /= gcd(arrayA[i],arrayB[i]);
            }
        }
        for(i = 0;i < numInLines;i++){
            printf("##%d %d##\n",arrayA[i],arrayB[i]);
        }
        for(i = 0;i < numInLines;i++){
            if(i == 0){
                arrayLog[0] = 1;
                continue;
            }
            for(j = i;j >= 0;j--){
                if(arrayA[i] == arrayA[j] && arrayB[i] == arrayB[j]){
                    arrayLog[i] = arrayLog[j] + 1;
                    break;
                }
            } 
        }
        int max = 0; 
        for(i = 0;i < numInLines;i++){
            if(arrayLog[i] > max){
                max = arrayLog[i];
            }
        }
        printf("%d\n",max);
        
    }
}
int gcd(int a,int b){
    return !b?a:(b,a%b);
}
