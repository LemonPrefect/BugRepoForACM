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
    int a, b, c,n,d;

    while (cin >> a >> b && a!=0 && b!=0) {
        a *= 100;
        n = 0;
        for (c = 0; c < 100; c++) {
            d = a + c;
            if (d % b == 0) {
                if (n != 0)cout << ' ';
                n++;
                if (c < 10) {
                    cout << 0 << c;
                }
                else {
                    cout << c;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
