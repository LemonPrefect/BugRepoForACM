#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n,a,b,sroce[200],result=0;
    while (cin >> n) {
        result = 0;
        for (a = 0; a < n; a++) {
            cin >> sroce[a];
        }for (b = 0; b < 100; b++) {
            for (a = 0; a < n - 1; a++) {
                if (sroce[a] < sroce[a + 1]) {
                    b = sroce[a];
                    sroce[a] = sroce[a + 1];
                    sroce[a + 1] = b;
                }
            }
        }
        for (b = 1; b < n - 1; b++) {
            result = result + sroce[b];
        }
        cout << fixed << setprecision(2);
        cout << result / (n - 2.00) << endl;
    }
    return 0;
}
