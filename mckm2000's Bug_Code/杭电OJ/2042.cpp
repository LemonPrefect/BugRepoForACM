#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    int len, a,b,n;
    int c,d,e,f,g,result,h=0;
    cin >> b;
    while (cin >> n) {
        result = 3;
        for (a = 1; a <= n; a++) {
            result = (result - 1) * 2;
        }
        cout << result << endl;
    }
    return 0;
}
