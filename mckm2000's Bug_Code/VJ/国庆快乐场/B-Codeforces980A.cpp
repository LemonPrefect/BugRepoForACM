#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main() {
	int n,len,a,b,i;
	char str[200];
	while (cin.getline(str,200)) {
		len = strlen(str);
		a = b = 0;
		for (i = 0; i < len; i++) {
			if (str[i] == '-')a++;
			if (str[i] == 'o')b++;
		}
		if(b != 0){
			if (a % b != 0)cout << "NO" << endl;
			else cout << "YES" << endl;
		}
		else {
			cout << "YES" << endl;
		}
		
	}
	return 0;
}
