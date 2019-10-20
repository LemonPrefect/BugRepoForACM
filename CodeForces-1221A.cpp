#include <cstdio>
#include <cstdlib>
#include <cstring>
int main(){
    int numArray[100000];
    int timesToRun = 0;
    int numInArray = 0;
    int numCollectArray[100000];
    int i,j;
    scanf("%d",&timesToRun);
    for(i = 0;i < timesToRun;i++){
        scanf("%d",&numInArray);
        //numArray = (int*)calloc(numInArray,sizeof(int));
        //numCollectArray = (int*)calloc(12,sizeof(int));
        memset(numArray,0,sizeof(numArray));
        memset(numCollectArray,0,sizeof(numCollectArray));
        for(j = 0;j < numInArray;j++){
            scanf("%d",&numArray[i]);
            switch (numArray[i])
            {
            case 1:
                numCollectArray[0]++;
                break;
            case 2:
                numCollectArray[1]++;
                break;
            case 4:
                numCollectArray[2]++;
                break;
            case 8:
                numCollectArray[3]++;
                break;
            case 16:
                numCollectArray[4]++;
                break;
            case 32:
                numCollectArray[5]++;
                break;
            case 64:
                numCollectArray[6]++;
                break;
            case 128:
                numCollectArray[7]++;
                break;
            case 256:
                numCollectArray[8]++;
                break;
            case 512:
                numCollectArray[9]++;
                break;
            case 1024:
                numCollectArray[10]++;
                break;
            case 2048:
                numCollectArray[11]++;
                break;
            default:
                break;
            }
        }
        for(j = 0;j <= 11;j++){
            if(numCollectArray[j] % 2 == 0){
                numCollectArray[j + 1] += numCollectArray[j] / 2;
            }else if(numCollectArray[j] % 2 == 1){
                numCollectArray[j + 1] += (numCollectArray[j] - 1) / 2;
            }
        }
        if(numCollectArray[11] >= 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
