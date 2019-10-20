#include <iostream>

using namespace std;
int a, b, c;
int main()
{
	while (cin >> a) {
		for (int b = 1; b <= a; b++) {
			c = c + b;
		}
		cout << c << endl;
		cout << endl;
		c = 0;
	}
	return 0;
}
