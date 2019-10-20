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
        len = strlen(str);
        for (a = 0; a < len; a++) {
            b = str[a];
            if (a == 0 || str[a - 1] == ' ')str[a] = b - 32;
        }
        for (a = 0; a < len; a++) {
            cout << str[a];
        }
        cout << endl;
    }
    return 0;
}
