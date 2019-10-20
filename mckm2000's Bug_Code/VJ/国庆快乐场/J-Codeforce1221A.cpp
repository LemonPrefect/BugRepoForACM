#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main() {
	int n,k,num[3000],t,i;
	while (cin >> n) {
		while (n--) {
			num[1] = num[2] = num[4] = num[8] = num[16] = num[32] = num[64] = num[128] = num[256] = num[512] = num[1024] = num[2048] = 0;
			cin >> k;
			while (k--) {
				cin >> t;
				if(t<=2048)num[t]++;
			}
			for (i = 1; i < 2048; i *= 2) {
				num[i * 2] += num[i] / 2;
				num[i] -= num[i] / 2;
			}
			if (num[2048] == 0)cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}
