#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    char a[20000],b[20000];
    int c,d,e,f,g,result,h=0;
    while (cin >> a>>b) {
        int lena = strlen(a);
        int lenb = strlen(b);
        result = 0;
        e = f = g = h = 0;
        for (c = 0; c < lena; c++) {
            if (e == 0) {
                if (a[c] == '.')e = c;
                else g = c;
            }
            else {
                if (a[c] != '0')g = c;
            }
        }
        if (e == 0)e = c;
        for (c = 0; c < lenb; c++) {
            if (f == 0) {
                if (b[c] == '.')f = c;
                else h = c;
            }
            else {
                if (b[c] != '0')h = c;
            }
        }
        if (g == h) {
            for (d = 0; d <= g; d++) {
                if (a[d] != b[d])result++;
            }
        }
        else {
            result++;
        }
        if (result == 0)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
