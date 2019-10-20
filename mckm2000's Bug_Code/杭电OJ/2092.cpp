#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
    double a, b, c;
    while (cin >> a >> b) {
        if (a == 0 && b == 0)return 0;
        c = 0;
        for (int i = - 20000; i<20000; i++) {
            if ( (a - i) * i == b) {
                c++;
                break;
            }
        }
        if (c == 0)cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
