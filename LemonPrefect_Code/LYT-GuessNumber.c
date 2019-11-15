#include <stdio.h>
int main(){
    int a = 0;
    srand(time(NULL));
    int x;
	x = rand() % 10;
    while(1){
    	scanf("%d",&a);
    	if(a == x){
        	printf("Yes it's the correct one.\n");
        	break;
    	}else{
        	printf("Sorry,the number is too %s.\n",(a > x)?"big":"small");
    	}
	}
    return 0;
}
