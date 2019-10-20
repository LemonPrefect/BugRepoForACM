#include <stdio.h>
#include<string.h>

int main(){
    char str1[1000];
    const char z[1] = {' '};
    char *str,*str2[1000];
    int n = 0,a =0,b,c;
            while(gets(str1) != 0 && str1[0]!='#'){
                a = 0;
                str = strtok(str1,z);
                str2[0] = str;
                while(str != NULL){
                    n = 0;    
                        for(b = a-1;b>=0;b--){
                        if(strcmp(str,str2[b]) == 0)n++;
        
                    }    
                    if(n == 0){
                    str2[a] = str;
                    a++;
                    }
                    str = strtok(NULL,z);
                }
                printf("%d\n",a);    
            }
            return 0;
    }
