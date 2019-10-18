//CodeForces 1169B
#include <stdio.h>
#include <stdlib.h>
int main(){
    int numMax = 0;
    int numLines = 0;
    int *a;
    int *b;
    int c[4] = {0,0,0,0};
    int e[2] = {0,0};
    int i,j,k;
    int flag = 0;
        scanf("%d %d",&numMax,&numLines);
        a = (int*)calloc(numLines,sizeof(int));
        b = (int*)calloc(numLines,sizeof(int));
        for(i = 0;i < numLines;i++){
            scanf("%d %d",&a[i],&b[i]);
        }
        e[0] = a[0];
        e[1] = b[0];
        flag = 0;
        for(i = 0;i < numLines;i++){
            if(e[0] != a[i] && e[0] != b[i]){
                c[0] = a[i];
                c[1] = b[i];
                break;
            }
        }
        for(i = 0;i < numLines;i++){
            if(e[1] != a[i] && e[1] != b[i]){
                c[2] = a[i];
                c[3] = b[i];
                break;
            }
        }
        for(i = 0;i < numLines;i++){
            if(e[0] != a[i] && e[0] != b[i] && c[0] != b[i] && c[0] != a[i]){
                flag++;
                break;
            }
        }
        for(i = 0;i < numLines;i++){
            if(e[0] != a[i] && e[0] != b[i] && c[1] != b[i] && c[1] != a[i]){
                flag++;
                break;
            }
        }
        for(i = 0;i < numLines;i++){
            if(e[1] != a[i] && e[1] != b[i] && c[2] != b[i] && c[2] != a[i]){
                flag++;
                break;
            }
        }
        for(i = 0;i < numLines;i++){
            if(e[1] != a[i] && e[1] != b[i] && c[3] != b[i] && c[3] != a[i]){
                flag++;
                break;
            }
        }
        if(flag == 4){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    return 0;
}
