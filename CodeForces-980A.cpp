#include <cstdio>
#include <cstring>
int main(){
    char necklace[110];
    int numOfPearl = 0;
    int numOfLink = 0;
    int i;
    scanf("%s",necklace);
    for(i = 0;i < strlen(necklace);i++){
        if(necklace[i] == 'o'){
            numOfPearl++;
            continue;
        }else if(necklace[i] == '-'){
            numOfLink++;
            continue;
        } 
    }
    if(numOfPearl == 0){
    	printf("YES\n");
    	return 0;
	}
    if((numOfLink % numOfPearl == 0 || numOfLink == 0)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
