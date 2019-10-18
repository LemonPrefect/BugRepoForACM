//C PRIMER PLUS 6
//5.11.9
#include <stdio.h>
int main(){
	double temperatureInput = 0.00;
	int Temperatures(double in);
	printf("Please enter a temperature:");
	while(scanf("%lf",&temperatureInput) == 1){
		Temperatures(temperatureInput);
		printf("Please enter a temperature:(enter anything character not a number to quit):");
	} 
}
double Temperatures(double in){
	const double KT = 273.16;
	const double ST = 32.0;
	double k = 0.00,s = 0.00;
	s = 5.0 / 9.0 * (in - ST);
	k = s + KT;
	printf("S  = %.2lf,K = %.2lf,H = %.2lf\n",s,k,in);
}
