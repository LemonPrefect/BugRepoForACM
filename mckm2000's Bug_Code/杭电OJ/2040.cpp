#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    int len, a,b,n;
    int c,d,e,f,g,result,h=0;
    cin >> n;
    while (cin >> a >> b) {
        c = d = 0;
        for (e = a-1; e >= 1; e--) {
            if (a % e == 0)c += e;
        }
        for (f = b-1; f >= 1; f--) {
            if (b % f == 0)d += f;
        }
        if (c == b && d == a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
        return 0;
}
