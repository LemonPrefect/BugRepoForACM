//C PRIMER PLUS 6
//5.11.7
#include <stdio.h>
//#include <math.h>
int main(){
	double numInput = 0.00,numOutput = 0.00;
	double cubicCalculate(double in);
	printf("Please enter a number:");
	scanf("%lf",&numInput);
	numOutput = cubicCalculate(numInput);
	printf("The result is %.2lf",numOutput);
} 
double cubicCalculate(double in){
	//return pow(in,3);
	return (in * in * in);
}
