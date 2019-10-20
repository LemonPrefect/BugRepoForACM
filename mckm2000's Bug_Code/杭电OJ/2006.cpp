#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{ 
    int result = 1,number,count;
    while (cin >> count) {
        result = 1;
        for (int n = 1; n <= count;n++) {
            cin >> number;
            if (number % 2 != 0)result = result * number;
        }
         cout << result << endl;
    }
    return 0;
}
