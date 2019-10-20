#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n[1000],a,b,c,d=0,e,f,g;
    while (cin >> a >> b && (a!=0 && b!=0)) {
        for (c = 0; c < a; c++) {
            cin >> n[c];
        }
        for (c = 0; c < a; c++) {
            if (n[c] >= b) {
                d = c;
                break;
            }
        }
        
        for (f = d; f <= a; f++) {
            e = n[f];
            n[f] = b;
            b = e;
        }
        
        for (c = 0; c <= a; c++) {
            if (c <= a - 1) {
                cout << n[c] << ' ';
            }
            else {
                cout << n[c] << endl;
            }
        }
    }
    return 0;
}
