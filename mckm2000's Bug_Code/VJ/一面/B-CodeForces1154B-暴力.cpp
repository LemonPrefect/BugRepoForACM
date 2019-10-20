#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int n;
int getmin(int a){
	for(int i = 9;i>1;i--){
		if(a%i == 0)return i;
	}
	return 0;
}
int pows(int a,int b){
	if(b == 0){
		return 1;
	}else{
		while(b>1){
			a *= a;
			b--;
		}
		return a;
	}
}
int main()
{
	int n,t,num[150],x,a,b,c,d,min,i;
	while (cin >> n) {
		t = 0;
		while (t < n) {
			cin >> num[t];
			t++;
		}
		min = 100;
		for (x = 1; x <= 100; x++) {
			a = x;
			b = 0;
			c = 0;
			for (i = 0; i < n; i++) {
				if (b == 0) {
					if (abs(a - num[i]) != 0) {
						b = abs(a - num[i]);
					}
				}else {
					if (abs(a - num[i]) != 0) {
						if (abs(a - num[i]) != b) {
							c = 1;
							break;
					  }
					}
				}
			}
			if (c == 0 && min > b)min = b;
		}
		if (min == 100)min = -1;
		cout << min << endl;
	}

		return 0;
	}
