#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    char x;
    int a,y,h,n;
    cin >> n;
    for (a = 1; a <= n; a++) {
        cin >> x >> y;
        h = x;
        if (h >= 65 && h <= 90)h = h - 64;
        if (h >= 97 && h <= 122)h = -(h - 96);
        cout << h + y << endl;
    }
    return 0;
}
