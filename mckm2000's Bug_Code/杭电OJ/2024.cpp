#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    char str[100];
    int n,len,a,b,first,result,c;
    cin >> n;
    getchar();
    for (a = 0; a < n; a++) {
        cin.getline(str, 100);
        len = strlen(str) - 1;
        first = str[0];
        result = 1;
        if ((first == 95)||((first>=97)&&(first<=122)) || ((first >= 65) && (first <= 90))) {
            result = 0;
        }
            for (b = 1; b <= len; b++) {
                c = str[b];
                if ((c == 95) || ((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)) || ((c >=48)&&(c <=57))) {
                }else {
                    result = 1;
                    break;
                }
            }
        if (result == 0) {
            cout << "yes" << endl;
        }else {
            cout << "no" << endl;
        }
    }

        
    return 0;
}
