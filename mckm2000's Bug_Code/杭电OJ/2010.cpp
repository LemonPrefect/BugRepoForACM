#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{ 
    int x,y,z,a,b,c,d,result[1000],number;
    while (cin >> x >> y) {
        if (y < x) { z = x; x = y; y = z; }
        number = 0;
        for (int n = x; n <= y; n++) {
            a = n / 100;
            b = (n / 10) % 10;
            c = n % 10;
            if ((pow(a, 3) + pow(b, 3) + pow(c, 3)) == n) {
                result[number] = n;
                number++;
            }
        }
        if (number == 0) {
            cout << "no" << endl;
        }
        else {
            for (d = 0; d < number; d++) {
                if (d == number - 1) {
                    cout << result[d]<<endl;
                }
                else {
                    cout << result[d] << " ";
                }
            }
        }
    }
    return 0;
}
