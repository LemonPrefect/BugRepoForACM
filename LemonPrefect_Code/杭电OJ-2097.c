/*Contest - A
*Author:GinzocKwok
*Submit 1
*Date:201908172337
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char numChar[4];
    int numSix[4];
    int numTwe[4];
    int num;
    int i;
    int sum = 0,sumSix = 0,sumTwe = 0;
    int temp;
    while(scanf("%s",&numChar) != EOF){
        if(numChar[0] == '0' && numChar[1] == '\0'){
            break;
        }
    	sum = 0;
    	num = 0;
    	sumSix = 0;
    	sumTwe = 0;
        for(i = 0;i < strlen(numChar);i++){
            sum += (numChar[i] - '0');
            num += (numChar[i] - '0') * pow(10,strlen(numChar) - i - 1);
        }
        temp = num;
        //printf("%d\n",sum);
        
        for(i = 0;i < strlen(numChar);i++){
            numSix[i] = num % 16;
            num /= 16;
            sumSix += numSix[i];
        }
        //printf("%d\n",sumSix);
        num = temp;
        for(i = 0;i < strlen(numChar);i++){
            numTwe[i] = num % 12;
            num /= 12;
            sumTwe += numTwe[i]; 
        }
        //printf("%d\n",sumTwe);
        num = temp;
        if(sum == sumSix && sumSix == sumTwe){
        	printf("%d is a Sky Number.\n",num);
		}else{
			printf("%d is not a Sky Number.\n",num);
		}
		memset(numChar,0,sizeof(numChar));
    }
    return 0;
}
