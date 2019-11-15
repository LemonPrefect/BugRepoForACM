#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
int main(){
    int chartArray[2000];
    bool isValid[2000];
    char num[6];
    int i,j;
    int sum = 0;
    int pnum = 0;
    scanf("%d",&pnum);
    for(i = pnum;i < 2000;i++){
        itoa(i,num,10);
        int numLength = strlen(num);
        sum = 0;
        for(j = 0;j < numLength;j++){
            sum += num[j] - '0';
        }
        if(sum % 4 == 0){
            isValid[i] = true;
            printf("%d\n",i);
            return 0;
        }
    }
} 
