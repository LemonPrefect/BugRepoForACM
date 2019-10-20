#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main() {
	 int n,t,max,maxx,c,len,length;
	while (cin >> n) {
		t = 0;
		cin >> max;
		length = 1;
		len = 1;
		while (t < n-1) {
				cin >> maxx;
				if (maxx == max) {
					len++;
				}else if(maxx > max) {
					length = 1;
					len = 1;
					max = maxx;
				}
				else if (maxx < max) {
					if (len > length) {
						length = len;
					}
					len = 0;
				}
				t++;
		}
		if (len > length) {
			length = len;
		}
		cout << length << endl;
	}
	return 0;
}
