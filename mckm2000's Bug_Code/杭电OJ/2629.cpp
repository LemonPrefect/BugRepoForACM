#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    char str[19];
    int n,c=1;
    cin >> n;
    getchar();
    while (c++ <= n) {
        cin.getline(str,19);
        cout << "He/She is from ";
        if(str[0] =='3' && str[1] == '3')cout << "Zhejiang";
        if (str[0] == '1' && str[1] == '1')cout << "Beijing";
        if (str[0] == '7' && str[1] == '1')cout << "Taiwan";
        if (str[0] == '8' && str[1] == '1')cout << "Hong Kong";
        if (str[0] == '8' && str[1] == '2')cout << "Macao";
        if (str[0] == '5' && str[1] == '4')cout << "Tibet";
        if (str[0] == '2' && str[1] == '1')cout << "Liaoning";
        if (str[0] == '3' && str[1] == '1')cout << "Shanghai";
        cout << ",and his/her birthday is on ";
        cout << str[10]<<str[11];
        cout << ",";
        cout << str[12]<<str[13];
        cout << ",";
        cout << str[6]<<str[7]<<str[8]<<str[9];
        cout<<" based on the table." << endl;
    }
    return 0;
}
