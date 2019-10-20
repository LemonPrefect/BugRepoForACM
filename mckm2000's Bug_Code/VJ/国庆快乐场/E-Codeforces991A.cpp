#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main() {
	int a, b, c, d,result;
	while (cin >> a >> b >> c >> d) {
		result = a + b - c;
		if (result >= d || c > a ||c > b)cout << -1 << endl;
		else cout << d - result << endl;
	}
	return 0;
}
