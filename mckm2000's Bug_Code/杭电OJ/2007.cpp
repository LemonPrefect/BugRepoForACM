#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;
int main()
{ 
    int x,y,result1 = 0, result2 = 0,z;
    while (cin >> x >> y) {
        result1 = 0, result2 = 0;
        if (x > y) { z = x; x = y; y = z; }
        for (int n=x; n <= y;n++) {
            if (n % 2 != 0) {
                result1 = result1+ (n*n*n);
            }
            else {
                result2 = result2 + (n*n);
            }
        }
        cout << result2 << " " << result1 << endl;
    }
    return 0;
}
