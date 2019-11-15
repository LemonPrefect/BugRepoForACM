#include <cstdio>
int main(){
    int numA = 0,numB = 0;
    scanf("%d %d",&numA,&numB);
    if((numA > numB && numA != 9) || (numA > numB && numA == 9 && numB != 1)){
        printf("-1\n");
        return 0;
    }else if(numA == numB){
        printf("%d0 %d1\n",numA,numB);
        return 0;
    }else if(numA == 9 && numB == 1){
        printf("%d9 %d00\n",numA,numB);
        return 0;
    }else if(numB - numA >= 2){
        printf("-1\n");
        return 0;
    }else{
        printf("%d9 %d0\n",numA,numB);
        return 0;
    }
}