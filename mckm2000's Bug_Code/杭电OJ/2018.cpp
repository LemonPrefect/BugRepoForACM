#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n,result,a=0,b=0,c=0,e=0,d=1;
    while (cin >> n && n!=0) {
        a = 0;
        b = 0;
        c = 0;
        d = 1;
        e = 0;
        for (int z = 1; z < n; z++) {
            d = d + c;
            c = b;
            b = a;
            a = d;
        }
        cout << a + b + c + d << endl;
    }
    return 0;
}
