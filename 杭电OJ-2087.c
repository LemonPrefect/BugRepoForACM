//杭电OJ 1096
#include <stdio.h>
int main(){
    int i,j,k,l;
    char strOriginal[1001];
    char strSearch[1001];
    while(scanf("%s",strOriginal) != EOF){
        if(strOriginal[0] == '#' && strOriginal[1] == '\0'){
            break;
        }else{
            scanf("%s",strSearch);
        }
        l = 0;
        //printf("%s %s\n",strOriginal,strSearch);
        for(i = 0;i < strlen(strOriginal);){
            k = 0;
            if(strOriginal[i] == strSearch[0]){
                for(j = 0;j < strlen(strSearch);j++){
                    //printf("%c %c\n",strSearch[j],strOriginal[i]);
                    if(strSearch[j] == strOriginal[i]){
                        k++;
                        i++;
                    }else{
                        i++;
                        continue;
                    }
                }
                if(k == strlen(strSearch)){
                    l++;
                }
            }else{
                i++;
            }
        }
        printf("%d\n",l);
    }
}