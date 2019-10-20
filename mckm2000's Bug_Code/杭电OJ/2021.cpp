#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n[1000],a,b,c,d,e,f,g,h,result;
    while (cin >> a  && (a != 0)) {
        c = d = e = f = g = h = 0;
        for (b = 0; b < a; b++) {
            cin >> n[b];
        }
        result = 0;
        for (b = 0; b < a; b++) {
            c = n[b] / 100;
            d = (n[b] - (c*100)) / 50;
            e = (n[b] - (c * 100)-(d*50)) / 10;
            f = (n[b] - (c * 100) - (d * 50)-(e*10)) / 5;
            g = (n[b] - (c * 100) - (d * 50) - (e * 10)-(f*5)) / 2;
            h = (n[b] - (c * 100) - (d * 50) - (e * 10) - (f * 5)-(g*2)) / 1;
            result += (c + d + e + f + g + h);
            c = d = e = f = g = h = 0;
        }
        cout << result << endl;
    }
    return 0;
}
