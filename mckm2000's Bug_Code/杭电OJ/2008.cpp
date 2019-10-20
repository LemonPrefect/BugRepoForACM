#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;
int main()
{ 
    double count,number,x,y,z;
    while (cin >> count) {
        x = y = z = 0;
        if (count == 0)break;
        for (int n = 1; n <= count;n++) {
            cin >> number;
            if (number < 0)x++;
            if (number == 0)y++;
            if (number > 0)z++;
        }
        cout <<x<<" "<<y<<" "<<z<< endl;
    }
    return 0;
}
