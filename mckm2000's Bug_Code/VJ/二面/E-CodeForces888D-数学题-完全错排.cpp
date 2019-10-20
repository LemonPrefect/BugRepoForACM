#include <iostream> 
#include<stdio.h> 
#include<cstring> 
#include<math.h> 
#include<iomanip> 
#include<cstdlib> 
using namespace std;
long long jc(int c, int d) {
	long long ans = 1;
	while (d != 0) {
		ans *= c;
		c--;
		d--;
	}
	return ans;
}

int main()
{
	int a, b, c, d, e,num[6];
	long long result;
	num[1] = 0;
	num[2] = 1;
	num[3] = 2;
	num[4] = 9;
	num[5] = 44;
	while (cin >> a>>b) {
		result = 0;
		for (e = b; e > 1; e--) {
			result += jc(a, e)/jc(e,e) * num[e];
		}
		result++;
		cout <<result<< endl;
	}
	return 0;
}
