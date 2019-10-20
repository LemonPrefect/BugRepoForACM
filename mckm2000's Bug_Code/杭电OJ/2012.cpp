#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n,c,a,b,d,result,e;
    while (cin>>a>>b) {
        if (a > b) {
            c = a;
            a = b;
            b = c;
        }
        if (a == 0 && b == 0)return 0;
        d = 0;
        for (n = a; n <= b; n++) {
            result = pow(n, 2) + n + 41;
            for (e = 2; e < result; e++) {
                if (result % e == 0) {
                    d++;
                }
            }
        }
        if (d == 0)cout << "OK" << endl; else cout << "Sorry" << endl;
    }
    return 0;
}
