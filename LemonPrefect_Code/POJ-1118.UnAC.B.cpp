#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
__int64 gcd(__int64 a,__int64 b);
int main(){
    int timesToRun = 0;
    int i,j;
    int numLines = 0;
    int *arrayA;
    int *arrayB;
    int result[2] = {0,0};
    scanf("%d",&timesToRun);
    for(i = 0;i < timesToRun;i++){
        scanf("%d",&numLines);
        arrayA = (int*)calloc(numLines + 1,sizeof(int));
        arrayB = (int*)calloc(numLines + 1,sizeof(int));
        memset(result,0,sizeof(result));
        arrayA[0] = 0;
        arrayB[0] = 0;
        for(j = 1;j <= numLines;j++){ 
        
            scanf("%d",&arrayA[j]);
        }
        for(j = 1;j <= numLines;j++){
            scanf("%d",&arrayB[j]);
        }
       
        int n = numLines;
        int gcdNum = 0;
        
        //Partial One
        result[0] = arrayA[n - 1] * arrayA[n] + arrayB[n];
        result[1] = arrayA[n];
        gcdNum = gcd(result[0],result[1]);
        result[0] /= gcdNum;
        result[1] /= gcdNum;

        //Partical Two
        for(j = n - 1;j >= 1;j--){
            if(j == 1){
                int ex = result[0];
                result[0] = result[1] * arrayB[1];
                result[1] = ex;
            }else{
                int ex = result[0];
                result[0] = arrayA[j - 1] * result[0] + arrayB[j] * result[1];
                result[1] = ex;
            }
            gcdNum = gcd(result[0],result[1]);
            result[0] /= gcdNum;
            result[1] /= gcdNum;
        }
        printf("Case #%d: %d %d\n",i + 1,result[0],result[1]);
        
    }
}
__int64 gcd(__int64 a,__int64 b){
    return !b?a:gcd(b,a%b);
}
