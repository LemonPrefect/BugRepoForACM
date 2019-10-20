#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main() {
	int len,i,type[10],a,c,result;
	double  b, sum,n;
	while (cin>>n) {
		len = n;
		sum = 0;
		result = 0;
		type[2] = type[3] = type[4] = type[5] = 0;
		while (len--) {
			cin >> a;
			type[a]++;
		}
		for (i = 2; i <= 5; i++) {
			sum += (i * type[i]);
		}
		b = 4.5 * n;
		if (sum < b){
			for (i = 2; i <= 5; i++) {
				if (sum >= b)break;
				if (type[i] != 0) {
					for (c = type[i]; c > 0; c--) {
						sum += (5 - i);
						result++;
						if (sum >= b)break;
					}
				}
			}
		}
		cout << result << endl;
	}
	return 0;
}
