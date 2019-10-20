#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    long long fx[60];
    int n;
    fx[0] = 0;
    fx[1] = 1;
    for (int i = 2; i <= 50; i++) {
        fx[i] = fx[i - 1] + fx[i - 2];
    }
    while (cin >> n && n != -1) {
        cout << fx[n] << endl;
    }
    return 0;
}
