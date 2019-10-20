#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n,len,a,b;
    char str[10000];
    cin >> n;
    getchar();
    while (n--) {
		cin.getline(str, 10000);
        len = strlen(str) -1;
        b = 0;
        for (a = 0; a <= len;a++) {
			int t = str[a];
            if (t >= 48 && t <= 57)b++;
        }
        cout << b <<endl;
    }
    return 0;
}
