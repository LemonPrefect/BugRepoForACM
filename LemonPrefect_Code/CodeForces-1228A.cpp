#include <cstdio>
#include <cstdlib>
#include <cstring>
int JudgeNumber(int a);
int main(){
    int numArray[100020];
    int i,j;
    int numA = 0,numB = 0;
    for(i = 0;i < 100000;i++){
        numArray[i] = JudgeNumber(i);
    }
    scanf("%d %d",&numA,&numB);
    for(i = numA;i <= numB;i++){
        if(numArray[i] == 1){
            printf("%d\n",i);
            return 0;
        }
    }
	printf("-1\n");
	return 0;
}
int JudgeNumber(int a){
    int checkDiverse[10] = {0,0,0,0,0,0,0,0,0,0};
    int i,j;
    char num[10];
    memset(num,0,sizeof(int));
    itoa(a,num,10);
    for(i = 0;i < strlen(num);i++){
        checkDiverse[num[i] - '0']++;
    }
    for(i = 0;i < 10;i++){
        if(checkDiverse[i] > 1){
            return 0;
        }
    }
    return 1;
}
