#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int str[100],a,b,c,d;
    long long x, y;
    while (cin >> x >> y) {
        d = a = 0;
        if (x < 0) {
            x = -x;
            d = 1;
        }
        b = x / y;
        c = x % y;
        while (b != 0) {
            str[a] = c;
            c = b % y;
            b = b / y;
            a++;
        }
        str[a] = c;
        if (d == 1)cout << '-';
        for (int i = a; i >= 0; i--) {
            if (str[i] <= 9)cout << str[i];
            else cout << (char)(str[i] + 55);
        }
        cout << endl;
    }
    return 0;
}
