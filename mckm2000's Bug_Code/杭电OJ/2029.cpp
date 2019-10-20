#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;




int main() {
    char arr[100];
    int len, a,b,n;
    int c,d,e,f,g,result;
    cin >> n;
    getchar();
    while (cin.getline(arr, 100)) {
        len = strlen(arr)-1;
        b = len;
        result = 0;
        for (a = 0; a <= len;a++) {
            if (arr[a] != arr[b])result = 1;
            b--;
        }
        if (result == 0) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    return 0;
}
