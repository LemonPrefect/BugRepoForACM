#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{ 
    double x,y,z,result;
    while (cin >> x>>y) {
        result = x;
        z = x;
        for (int n = 1; n < y;n++) {
            result = result + sqrt(z);
            z = sqrt(z);
        }
        cout << fixed << setprecision(2);
        cout <<result<< endl;
    }
    return 0;
}
