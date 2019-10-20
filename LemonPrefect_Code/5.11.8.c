//C PRIMER PLUS 6
//5.11.8
#include <stdio.h>
int main(){
	int secndOperand = 0,firstOperand = 0;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d",&secndOperand);
	printf("Now enter the first operand:");
	scanf("%d",&firstOperand);
	while(secndOperand > 0 && firstOperand >0){
		printf("%d %% %d is %d\n",firstOperand,secndOperand,firstOperand % secndOperand);
		printf("Enter next number for first operand(<=0 to quit):");
		scanf("%d",&firstOperand);
	}
	printf("Done");
	return 0;
}

