#include <iostream>
#include<stdio.h>

using namespace std;
int c, number, d;
int a, b;
int main()
{
	while (cin >> number) {
		b = 0;
		for (c = 1; c <= number; c++) {
			cin >> a;
			b = b + a;
		}
		if (number == 0)return 0;
		cout << b << endl;
	}
	return 0;
}