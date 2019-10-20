#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>

using namespace std;
int num[100001];
int main() {
	int a, b, c, d,e,result;
	for (int i = 0; i <= 100000; i++) {
		if (i < 10) {
			num[i] = 1;
		}
		else if (i >= 10 && i < 100) {
			a = i % 10;
			b = (i / 10);
			if (a == b)num[i] = 0;
			else num[i] = 1;
		}
		else if (i >= 100 && i < 1000) {
			a = i % 10;
			b = (i / 10) % 10;
			c = (i / 100);
			if (a == b || a == c || b == c)num[i] = 0;
			else num[i] = 1;
		}else if (i >= 1000 && i < 10000) {
			a = i % 10;
			b = (i / 10) % 10;
			c = (i / 100) % 10;
			d = (i / 1000);
			if (a == b || a == c ||a == d|| b == c || b == d || c == d)num[i] = 0;
			else num[i] = 1;
		}else if (i >= 10000 && i < 100000) {
			a = i % 10;
			b = (i / 10) % 10;
			c = (i / 100) % 10;
			d = (i / 1000) % 10;
			e = (i / 10000);
			if (a == b || a == c || a == d || a == e || b == c || b == d || b == e || c == d || c == e || d == e)num[i] = 0;
			else num[i] = 1;
		}
	}
	num[100000] = 0;
	while (cin >> a >>b) {
		result = 0;
		for (c = a; c <= b; c++) {
			if (num[c] == 1) {
				cout << c;
				result = 1;
				break;
			}
		}
		if (result == 0)cout << -1 << endl;
		else cout << endl;
	}
	return 0;
}
