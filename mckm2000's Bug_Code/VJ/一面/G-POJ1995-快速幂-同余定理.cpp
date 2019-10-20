#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
long long pows(long long a, long long b,int t) {
	long long ans = 1,base = a;
	while (b != 0) {
		if (b%2 !=0)
		ans = (ans * base)%t;
		base = (base*base)%t;
		b >>= 1;
	}
	return ans;
}
int main() {
	int n, d;
	long long sum,num,k,t;
	while (cin >> n) {
		while (n > 0) {
			cin >> t>>d;
			sum = 0;
			while (d > 0) {
				cin >> num >> k;
				sum += pows(num, k,t);
				d--;
			}
			sum %= t;
			cout << sum << endl;
			n--;
		}
	}
	return 0;
}
