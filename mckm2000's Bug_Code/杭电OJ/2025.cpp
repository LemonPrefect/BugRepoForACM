#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    char str[200];
    int n=0,len,a,b,max=0,result,c;
    while (cin.getline(str, 200)) {
        len = strlen(str) -1;
        max = 0;
            for (a = 0; a <= len; a++) {
                b = str[a];
                if (b > max) {
                    max = b;
                }
            }
            for (a = 0; a <= len; a++) {
                b = str[a];
                cout << str[a];
                if (b == max) {
                    cout << "(max)";
                }
            }
            cout << endl;
}
    return 0;
}
