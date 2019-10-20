//C PRIMER PLUS 6
//5.11.5
#include <stdio.h>
int main(){
	const float CENTITOINCH = 2.54;
	float heightInput = 0.00;
	float inches = 0.00;
	int feet = 0;
	printf("Enter a height in centimetres:");
	scanf("%f",&heightInput);
	while(heightInput > 0){
		feet = (int)((heightInput / CENTITOINCH) / 12);
		inches = (heightInput / CENTITOINCH) - (feet * 12);
		printf("%.1f cm = %d feet, %.1f inches\n",heightInput,feet,inches);
		printf("Enter a height in centimetres(<=0 to quit):");
		scanf("%f",&heightInput);
	}
	printf("bye");
	return 0;
}
