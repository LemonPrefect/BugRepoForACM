#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n, c, a, b, d, result, e;
    while (cin >> n) {
        b = 1;
        for (a = n; a > 1; a--) {
            b = (b + 1) * 2;
        }
        cout << b << endl;
    }
    return 0;
}
