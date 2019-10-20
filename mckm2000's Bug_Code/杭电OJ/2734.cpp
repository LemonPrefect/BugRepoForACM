#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    int n,result,a;
    char str[300];
    while (cin.getline(str,300) && str[0]!='#') {
        int len = strlen(str) - 1;
        result = 0;
        for (n = 0; n <= len; n++) {
            if (str[n] != ' ') {
                a = str[n];
                result = result + ((a - 64) * (n + 1));
            }
        }
        cout << result << endl;
    }
    return 0;
}
