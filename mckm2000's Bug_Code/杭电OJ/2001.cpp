#include <iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	double x1, x2, y1, y2;
	while (cin >> x1 >> y1 >> x2 >> y2) {
		cout << fixed << setprecision(2);
		cout << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
	}
	return 0;
}
