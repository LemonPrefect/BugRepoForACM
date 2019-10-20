#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
    int a, b, c,n;
    cin >> n;
    while (n>0) {
        cin >> a >> b;
        a %= 100;
        b %= 100;
        c = a + b;
        c %= 100;
        cout << c << endl;
        n--;
    }
    return 0;
}
