//杭电OJ 2156
#include <stdio.h>
int main(){
    int numInput = 0;
    int i;
    double sum;
    while(scanf("%d",&numInput) != EOF){
    	if(numInput == 0){
    		break;
		}
        sum = 0;
        for(i = 2;i <= numInput;i++){
            sum += 2 * (1.0 / (double)i) * (numInput - i + 1);
        }
        sum += numInput;
        printf("%.2lf\n",sum);
    }
}
