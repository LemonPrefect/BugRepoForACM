#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
	int n, a, b, c = 0;
	char how;
	int result;
	cin >> n;
	while (c++ < n) {
		cin >> how >> a >> b;
		result = 0;
		if (how == '+') cout << a + b << endl;
		if (how == '-') cout << a - b << endl;
		if (how == '*') cout << a * b << endl;
		if (how == '/') {
			if ((a % b) != 0) {
				cout << fixed << setprecision(2) << (double)a / b << endl;
			}
			else {
				cout << a / b << endl;
			}
		}

	}
	return 0;
}