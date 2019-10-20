#include <cstdio>
int main(){
    int candy[4] = {0,0,0,0};
    int sum[2] = {0,0};
    scanf("%d %d %d %d",&candy[0],&candy[1],&candy[2],&candy[3]);
    //2-2
    if(candy[0] + candy[1] == candy[2] + candy[3]){
        printf("YES\n");
        return 0;
    }else if(candy[0] + candy[2] == candy[1] + candy[3]){
        printf("YES\n");
        return 0;
    }else if(candy[0] + candy[3] == candy[1] + candy[2]){
        printf("YES\n");
        return 0;
    }
    //3-1
    else if(candy[0] + candy[1] + candy[2] == candy[3]){
        printf("YES\n");
        return 0;
    }else if(candy[0] + candy[1] + candy[3] == candy[2]){
        printf("YES\n");
        return 0;
    }else if(candy[0] + candy[2] + candy[3] == candy[1]){
        printf("YES\n");
        return 0;
    }else if(candy[1] + candy[2] + candy[3] == candy[0]){
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}