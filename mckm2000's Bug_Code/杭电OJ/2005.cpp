#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int day,year,month,result;
    int n, months1[] = {31,28,31,30,31,30,31,31,30,31,30,31}, months2[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    while (cin >> year) {
        cin.ignore();
        cin >> month;
        cin.ignore();
        cin >> day;
        result = day;
        for (n = 1; n < month; n++) {
            if ((year % 100 != 0)) {
                if ((year % 4 == 0)) {
                    result = result + months2[n - 1];
                }
                else {
                    result = result + months1[n - 1];
                }
            }else {
                if (year % 400 == 0) {
                    result = result + months2[n - 1];
                }
                else {
                    result = result + months1[n - 1];
                }
            }
        }
         cout << result << endl;
    }
    return 0;
}
