#include <cstdio>
#include <cstdlib>
int main(){
    int p = 0;
    int i,j,k;
    int timesToRun = 0;
    scanf("%d",&timesToRun);
    for(k = 0;k < timesToRun;k++){
        scanf("%d",&p);
        int left = 0;int right = p - 1;
        for(i = 0;i < p;i++){
            for(j = 0;j < p;j++){
                if(j == left || j == right){
                    printf("X");
                    if(j == right && i < p / 2 + 1){
                    	break;
					}
					if(j == left && i >= p / 2 + 1){
                    	break;
					}
                }else{
                    printf(" ");
                }
                
            }
            left++;
			right--;
            printf("\n");
        }
        printf("\n");
    }
}
