#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;




int main() {
    int arr[100][100];
    int len, a,b,n;
    int c,d,e,f,g,result,h=0;
    while (cin >> n) {
        for (a = 0; a < n; a++) {
            arr[a][0] = 1;
        }
        arr[1][1] = 1;
        for (b = 2; b < n; b++) {
            for (c = 1; c < b; c++) {
                arr[b][c] = arr[b - 1][c] + arr[b - 1][c - 1];
            }
            arr[b][b] = 1;
        }
        for (d = 0; d < n; d++) {
            for (e = 0; e <= d; e++) {
                cout << arr[d][e];
                if (e != d)cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
        return 0;
}
