#define tene9n7 1000000007
#include <cstdio>
#include <cstdlib>
int main(){
    __int64 *column;
    __int64 *row;
    int i,j;
    __int64 height = 0,width = 0;
    __int64 result = 1;
    scanf("%I64d %I64d",&height,&width);
    getchar();
    column = (__int64*)calloc(width + 1,sizeof(__int64)); //列
    row = (__int64*)calloc(height + 1,sizeof(__int64));//行
    for(i = 0;i < height;i++){
        scanf("%I64d",&row[i]);
    }
    getchar();
    for(i = 0;i < width;i++){
        scanf("%I64d",&column[i]);
    }
    //padding from zero
    for(i = 0;i < width;i++){ //列
        for(j = 0;j < height;j++){//行
            if((i == row[j] && j <= column[i] - 1) || (i <= row[j] - 1 && j == column[i])){//The block doesn't exist
                printf("0\n");
                return 0;
            }else if(j > column[i] && i > row[j]){
                result = (result * 2) % tene9n7;
            }
        }
    }
    printf("%d\n",result);
    return 0;
}
