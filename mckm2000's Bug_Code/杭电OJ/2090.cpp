#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
    char s[100];
    double n, v,result = 0;
    while (cin >> s >> n >> v) {
        result += (n * v);
    }
    cout << fixed << setprecision(1);
    cout << result << endl;
    return 0;
}
