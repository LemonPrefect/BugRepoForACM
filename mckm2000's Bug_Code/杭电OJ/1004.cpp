#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	int n, len, a, re[100], max, maxn;
	string str, str1[100];
	while (cin >> n && n != 0) {
		len = 0;
		for (int i = 0; i < n; i++) {
			cin >> str;
			a = 0;
			for (int ii = 0; ii < len; ii++) {
				if (str1[ii] == str) {
					re[ii]++;
					a++;
				}
			}
			if (a == 0) {
				str1[len] = str;
				re[len] = 1;
				len++;
			}
		}
		max = re[0];
		maxn = 0;
		for (int iii = 1; iii < len; iii++) {
			if (re[iii] > max) {
				max = re[iii];
				maxn = iii;
			}
		}
		cout << str1[maxn] << endl;
	}
	return 0;
}