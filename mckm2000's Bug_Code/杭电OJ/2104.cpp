#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;

int getmin(int a, int b) {
    int c;
    if (a < b) {
        c = b;
        b = a;
        a = c;
    }
    if (b != 0) {
        getmin(b, a % b);
    }
    else {
        return a;
    }
}
int main() {
    char x;
    int a,b,y,h,n;
    while (cin >> a >> b && a != -1 && b != -1) {
        h = getmin(a, b);
        if (h == 1)cout << "YES" << endl;
        else cout << "POOR Haha" << endl;
    }
    return 0;
}
