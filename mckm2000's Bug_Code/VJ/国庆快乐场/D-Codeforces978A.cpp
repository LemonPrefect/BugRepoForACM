#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main() {
	int len,i,a,c,result,n,b,k,num[100000],type[1000],ii;
	while (cin>>n){
		len = 0;
		result = a = b = 0;
		while (len<n) {
			cin >> num[len];
			len++;
		} 
		for (i = 0; i < len-1; i++) {
			result = 0;
			for (ii = i+1; ii <= len-1; ii++) {
				if (num[i] == num[ii]) {
					n--;
					result = 0;
					break;
				}
				result = 1;
			}
			if (result == 1) {
				type[a] = num[i];
				a++;
			}
		}
		type[a] = num[len-1];
		cout << n << endl;
		for (i = 0; i < n-1; i++) {
			cout << type[i] << ' ';
		}
		cout << type[n - 1] << endl;
	}
	return 0;
}
