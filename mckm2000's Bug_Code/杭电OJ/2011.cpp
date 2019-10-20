#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{ 
    double m,number,result=1.00;
    while (cin >>m) {
        for (double n = 1; n <= m; n++) {
            cin >> number;
            result = 1.00;
            for (int count = 2; count <= number; count++) {
                if ((count% 2) == 0)result = result - (1.00 / count);
                if ((count % 2) != 0)result = result + (1.00 / count);
            }
            cout << fixed << setprecision(2);
            cout << result << endl;
        }
    }
    return 0;
}
