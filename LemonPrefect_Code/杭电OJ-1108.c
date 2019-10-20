/*Contest - E
*Author:GinzocKwok
*Submit 6
*Date:201908172118
*/
#include <stdio.h>
int main(){
   int numA = 0,numB = 0;
   int divisor = 0,dividend = 0,remainder = 0;
   int i,j;
   int ex;
   while(scanf("%d %d",&numA,&numB) != EOF){
        dividend = (numA >= numB)?numA:numB;
        divisor = (numA >= numB)?numB:numA;
        while(divisor != 0){
            remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;
        }
        printf("%d\n",(numA * numB) / dividend);

   }
}
