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
    while (cin >> n && n !=0) {
        a = getHex(n,10,0);
        b = getHex(n, 16, 0);
        c = getHex(n, 12, 0);
        if (a == b && a == c)cout << n << " is a Sky Number." << endl;
        else cout << n << " is not a Sky Number." << endl;
    }
    return 0;
}
