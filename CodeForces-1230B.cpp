#include <cstdio>
#include <cstdlib>
#include <cstring>
int main(){
    char *numArray;
    int modifiedableNum = 0;
    int characterInNum = 0;
    int i;
    scanf("%d %d",&characterInNum,&modifiedableNum);
    getchar();
    numArray = (char*)calloc(characterInNum,sizeof(char));
    scanf("%s",numArray);
    if(modifiedableNum == 1 && characterInNum == 1){
        printf("0\n");
        return 0;
    }else if(modifiedableNum == 0){
        printf("%s\n",numArray);
        return 0;
    }else{
        if(numArray[0] != '1'){
            numArray[0] = '1';
            modifiedableNum--;
        }
        for(i = 1;i < characterInNum && modifiedableNum > 0;i++){
            if(numArray[i] != '0'){
                numArray[i] = '0';
                modifiedableNum--;
            }
        }
    }
    printf("%s\n",numArray);
    return 0;
}