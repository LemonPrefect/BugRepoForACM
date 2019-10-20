#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n[1000],a,b,c,d=0,e,f,g;
    while (cin >> a  && (a != 0)) {
        for (b = 0; b < a; b++) {
            cin >> n[b];
        }
        for (c = 0; c < 200; c++) {
            for (d = 0; d < a-1; d++) {
                if (n[d] < 0) {
                    e = -n[d];
                }
                else {
                    e = n[d];
                }
                if (n[d + 1] < 0) {
                    f = -n[d + 1];
                }
                else {
                    f = n[d + 1];
                }
                if (e < f) {
                    g = n[d];
                    n[d] = n[d + 1];
                    n[d + 1] = g;
                }
            }
        }
        for (b = 0; b < a; b++) {
            if (b < a - 1) {
                cout << n[b] << ' ';
            }
            else {
                cout << n[b] << endl;
            }
    }
    }
    return 0;
}
