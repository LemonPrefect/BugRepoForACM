#include <iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    double number;
    while (cin>>number) {
        cout << fixed << setprecision(2);
        if (number <= 0)number = (-number);
        cout << number << endl;
    }
    return 0;
}
