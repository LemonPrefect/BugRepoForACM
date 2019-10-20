#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n,a,b,number[300],result=0;
    while (cin >> a>>b) {
        for (n = 1; n <= a;n++) {
            number[n - 1] = n * 2;
        }
        int count = a / b;
        for (int c = 1; c <= count; c++) {
            result = 0;
            for (int d = 0; d < b; d++) { 
                result += number[b*(c-1) + d];
            }
            cout << result / b;
            if (c != count)cout << ' ';
        }
        if (a % b != 0) {
            result = 0;
            for (int e = 0; e < (a % b); e++) {
                result += number[(b * count) + e];
            }
            cout << ' '<<result / (a % b);
        }
        cout << endl;
    }
    return 0;
}
