#include <iostream>
#include<stdio.h>

using namespace std;
int main()
{
	char strings[3];
	int a, b, c, d;
	char e, f, g;
	while (cin >> strings) {
		a = strings[0];
		b = strings[1];
		c = strings[2];
		if (c > b) {
			d = b;
			b = c;
			c = d;
		}
		if (b > a) {
			d = a;
			a = b;
			b = d;
		}
		if (c > b) {
			d = b;
			b = c;
			c = d;
		}
		e = c; f = b; g = a;
		cout << e << " " << f << " " << g << endl;
	}
	return 0;
}