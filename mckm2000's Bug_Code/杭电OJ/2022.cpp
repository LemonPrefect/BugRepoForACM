#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n[100][100];
    int a, b, c, d, e, f, g, max, type1, type2;
    while (cin >> a>>b  && (a != 0)) {
        for (c = 0; c < a; c++) {
            for(d=0;d<b;d++){
                cin >> n[c][d];
            }
        }
        max = n[0][0];
        type1 = type2 = 0;
        for (e = 0; e < a; e++) {
            for (f = 0; f < b; f++) {
                g = n[e][f];
                if (g < 0)g = -g;
                if (g > max) {
                    max = g;
                    type1 = e;
                    type2 = f;
                }
            }
        }
        cout << type1 + 1 << ' ' << type2 + 1 << ' ' << n[type1][type2] << endl;
    }
    return 0;
}
