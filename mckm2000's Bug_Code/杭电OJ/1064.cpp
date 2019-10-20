#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
	double money = 0, a;
	while (cin >> a) {
		money = money + a;
	}
	cout << fixed << setprecision(2);
	cout << '$' << money / 12.00 << endl;
}