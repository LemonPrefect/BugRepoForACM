#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{ 
    double m,a,b,c,d;
    while (cin >>m) {
        for (int n = 1; n <= m; n++) {
            cin >> a >> b >> c;
            if (c > a) {
                d = a;
                a = c;
                c = d;
            }
            if (b > a) {
                d = a;
                a = b;
                b = d;
            }
            if (c>b) {
                d = b;
                b = c;
                c = d;
            }
            if ((b+c) > a) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
