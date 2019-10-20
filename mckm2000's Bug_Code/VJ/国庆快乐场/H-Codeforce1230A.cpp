#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int is_OK(int a, int b, int c, int d) {
	if (a + b == c + d)return 1;
	if (a + c == b + d)return 1;
	if (a + d == c + b)return 1;
	if (a == b + c + d)return 1;
	if (b == a + c + d)return 1;
	if (c == b + a + d)return 1;
	if (d == b + c + a)return 1;
	return 0;
}
int main() {
	int num[5],result;
	while (cin >> num[0] >> num[1] >> num[2] >> num[3]) {
		result = is_OK(num[0], num[1], num[2], num[3]);
		if (result == 1)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
