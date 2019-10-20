#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
	int a, b, c, d, e, f, result1, result2, result3;
	for (int n = 2992; n <= 9999; n++) {
		result1 = result2 = result3 = 0;
		a = n / 1000;
		b = (n % 1000) / 100;
		c = (n % 100) / 10;
		d = n % 10;
		result1 = a + b + c + d;
		for (e = n; e > 0; e = e / 12) {
			result2 = result2 + (e % 12);
		}
		for (e = n; e > 0; e = e / 16) {
			result3 = result3 + (e % 16);
		}
		if (result1 == result2 && result2 == result3) {
			cout << n << endl;
		}
	}
	return 0;
}