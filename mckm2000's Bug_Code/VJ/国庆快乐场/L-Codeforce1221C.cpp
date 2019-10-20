#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
//0=w 1=b

int main() {
	int k,t,i,ii,n;
	long long a, b, c,result,d;
	cin >> n;
	while (n--) {
		result = 0;
		cin >> a >> b >> c;
		if (b > a) {
			d = a;
			a = b;
			b = d;
		}
		if (c <= b) {
			result += c;
			a -= c;
			b -= c;
			c = 0;
		}
		else {
			result += b;
			a -= b;
			c -= b;
			b = 0;
		}
		if (a != 0 && b != 0) {
			if ((a + b) / 3 > b)result += b;
			else result += (a + b) / 3;
		}
		cout << result << endl;
	}
	return 0;
}
