#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    double n[100][10];
    int a, b, c, d,e,f,result,sorce;
    while (cin >> a>>b  && (a != 0)) {
        for (c = 0; c < a; c++) {
            for(d=0;d<b;d++){
                cin >> n[c][d];
                n[a][d] = 0;
            }
            n[c][b] = 0;
        }
        for (c = 0; c < a; c++) {
            for (d = 0; d < b; d++) {
                n[c][b] += n[c][d];
            }
            cout << fixed << setprecision(2);
             cout<<(n[c][b] / (b*1.00));
             if (c < a - 1) {
                 cout << ' ';
             }
             else {
                 cout << endl;
             }
        }
        for (e = 0; e < b; e++) {
            for (f = 0; f < a; f++) {
                n[a][e] += n[f][e];
            }
            
            cout << fixed << setprecision(2);
            cout<<(n[a][e] / (a*1.00));
            n[a][e] = (n[a][e] / (a * 1.00));
            if (e < b - 1) {
                cout << ' ';
            }else {
                cout << endl;
                
            }
        }
        result = 0;
        for (c = 0; c < a; c++) {
            sorce = 0;
            for (d = 0; d < b; d++) {
                if (n[c][d] >= n[a][d])sorce++;
            }
            if (sorce == b)result++;
        }
        cout << result << endl<<endl;
    }
    return 0;
}
