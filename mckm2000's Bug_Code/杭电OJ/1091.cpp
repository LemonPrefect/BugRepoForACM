#include <iostream>
#include<stdio.h>

using namespace std;
int c, number, d;
int a, b;
int main()
{
	//cin >> number;
	while (cin >> a >> b) {
		if ((a == 0) && (b == 0))return 0;
		cout << a + b << endl;
	}
	return 0;
}