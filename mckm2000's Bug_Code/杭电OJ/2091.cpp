#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
    char str,str1[50][100];
    int n,a,b,c,d,e;
    e = 0;
    while (cin >> str && str !='@') {
        cin >> n;
        a = 0;
        if (e != 0)cout << endl;
        for (int i = n - 1; i >= 0; i--) {
                if (a == 0) {
                    for (b = 0; b <= 2 * (n - 1); b++) {
                        str1[i][b] = str;
                    }
                }
                else {
                    for (b = 0; b <= 2 * (n - 1) - a; b++) {
                        if (b == a || b== 2 * (n - 1) - a) {
                            str1[i][b] = str;
                        }
                        else {
                            str1[i][b] = ' ';
                        }
                    }
                }
                a++;
        }
        int len = n;
        for (c = 0; c <= n - 1; c++) {
            for(d = 0;d< len;d++){
                cout << str1[c][d];
            }
            cout << endl;
            len++;
        }
        e++;
    }
    return 0;
}
