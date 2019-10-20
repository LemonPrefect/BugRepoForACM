#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n,a,b,c,number[300],result=0,min,type;
    while (cin>>n) {
        for (a = 0; a < n; a++) {
            cin >> number[a];
        }
        min = number[0];
        type = 0;
        for (b = 0; b < n; b++) {
            if (number[b] < min) {
                min = number[b];
                type = b;
            }
            
        }
        number[type] = number[0];
        number[0] = min;
        for (c = 0; c < n; c++) {
            cout << number[c];
            if (c < n - 1) {
                cout << ' ';
            }
            else {
                cout << endl;
            }
        }
    }
    return 0;
}
