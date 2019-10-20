#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
char str[2000001];
int main() {
	long long i;
	int n,k,result,t;
	while (cin >>n>>k) {
		getchar();
		cin.getline(str, 2000001);
		if (n == 1 && k != 0)cout << 0 << endl;
		else {
			t = 0;
				for (i = 0; i < n; i++) {
					if (t < k) {
						if (i == 0 && str[0] != '1') {
							str[0] = '1';
							t++;
						}
						if (i != 0 && str[i] != '0') {
							str[i] = '0';
							t++;
						}
					}
					else break;
					
				}
				cout << str << endl;
		}
	}
	return 0;
}
