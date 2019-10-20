#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
long long pows(long long a, long long b, long long t) {
	long long ans = 1, base = a;
	while (b != 0) {
		if (b % 2 != 0)
			ans = (ans * base) % t;
		base = (base * base) % t;
		b >>= 1;
	}
	return ans;
}
int main() {
	long long result;
	int c[2000],r[2000],h,w,t,tt;
	while (cin >> h >>w) {
		result = 0;
		for (t = 1; t <= h; t++)
		    cin >> r[t];
		for (t = 1; t <= w; t++)
			cin >> c[t];
		for (t = 1; t <= h; t++) {
			for (tt = 1; tt <= r[t] + 1; tt++) {
				if (c[tt] == t - 1 && tt != r[t] + 1) {
					result = -1;
					goto end;
				}
				if (c[tt] == t && tt == r[t] + 1) {
					result = -1;
					goto end;
				}
			}
				for (tt = r[t] + 2; tt <= w; tt++) {
					if (t > c[tt] + 1)result++;
				}
		}
	end:if (result == 0)cout << 1 << endl;
		else if (result == -1)cout << 0 << endl;
		else if(result > 0)cout << pows(2,result,1000000007)%1000000007 << endl;
	}
	return 0;
}
