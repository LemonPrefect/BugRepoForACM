#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(){
    int i;
    int p;
    char str[10000];
    __int64 result = 0;
    while(scanf("%s",str) != EOF){
        result = 0;
        int d = strlen(str);
        if(d == 1 && str[0] == '0'){
            break;
        }
        for(i = 0;i < d;i++){
            result += str[i] - '0';
        }
        while(result > 9){
            p = 0;
            while(result)
            {
                p+=result%10;
                result/=10;
            }
            result=p;
        }
        printf("%I64d\n",result);
        memset(str,'\0',10000 * sizeof(char));
    }
}