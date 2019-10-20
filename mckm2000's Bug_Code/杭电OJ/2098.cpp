#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int getHex(int a, int b,int c) {
    c += (a % b);
    if ((int)(a / b) != 0) getHex(a / b, b, c);
    if ((int)(a / b) == 0)return c;
}

int main() {
    int a, b, c,n,d,ss[10001];
    ss[0] = ss[1] = 1;
    for (c = 2; c <= 10000; c++) {
        ss[c] = 0;
        for (d = 2; d < c; d++) {
            if (c % d == 0) {
                ss[c] = 1;
                break;
            }
        }
    }
    while (cin >> n && n !=0) {
        b = 0;
        for (a = 2; a < n/2; a++) {
            if (ss[a] == 0 && ss[n-a] == 0) {
                b++;
            }
        }
        cout << b << endl;
    }
    return 0;
}
