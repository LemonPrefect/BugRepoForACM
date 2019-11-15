//杭电OJ 1005
#include <cstdio>
#include <cstdlib>
#include <algorithm>
int main(){
    int n = 0;
    int a = 0,b = 0;
    int *numArray;
    while(scanf("%d %d %d",&a,&b,&n) != EOF){
        if(a == 0 && b == 0 && n == 0){
            break;
        }
        if(a == 7 && b == 7 & n >= 3){  //when number times 7 == 0, the numLoop will be 1 and an error may occurred. Use this judge to make it correct.
        	printf("0\n");
        	continue;
		}
        numArray = (int*)calloc(1000,sizeof(numArray));
        numArray[0] = -1;
        numArray[1] = 1;
        numArray[2] = 1;
        int numLoop = 48;// special judge but cann't be 1
        for(int i = 3;i < 1000;i++){
            numArray[i] = ((a * numArray[i - 1]) + (b * numArray[i - 2])) % 7;
            if(numArray[i] == 1 && numArray[i - 1] == 1){
                i -= 2;
                numLoop = i;
                break;
            }
        }
        int numCheck = n % numLoop;
        printf("%d\n",numArray[(numCheck == 0)?numLoop:numCheck]);
        free(numArray);
    }
    return 0;
}

