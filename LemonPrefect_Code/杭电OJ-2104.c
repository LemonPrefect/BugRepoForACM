#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = 0,b = 0,c = 0;
    while(scanf("%d %d",&a,&b) != EOF){
        if(a == -1 && b == -1){
            break;
        }
        while(b != 0){
            c = a % b;
            a = b;
            b = c; 
        }
        if(a == 1){
            printf("YES\n");
        }else{
            printf("POOR Haha\n");
        }
    }
    return 0;
}
