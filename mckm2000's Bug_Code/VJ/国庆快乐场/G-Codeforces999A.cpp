#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main() {
	int len,i,a,c,result,n,b,k;
	while (cin>>n>>k){
		len = 1;
		result = a = b = 0;
		while (len<=n) {
			cin >> c;
			if (c > k && a != 0)b = len;
			if (c > k && a == 0)a = len;
			len++;
		}
		if (a == 0 && b == 0)result = n;
		if (a != 0 && b == 0)result = n - 1;
		if (a != 0 && b != 0)result = n - (b - a + 1);
		cout << result << endl;
	}
	return 0;
}
