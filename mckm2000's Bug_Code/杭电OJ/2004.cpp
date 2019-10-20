#include <iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int number;
    string result;
    while (cin>>number) {
        //cout << fixed << setprecision(2);
        if (90 <= number && number <= 100)result = "A";
        if (80 <= number && number<= 89)result = "B";
        if (70 <= number && number<= 79)result = "C";
        if (60 <= number && number<= 69)result = "D";
        if (0 <= number && number<= 59)result = "E";
        if (number > 100 | number < 0)result = "Score is error!";
        cout << result << endl;
    }
    return 0;
}
