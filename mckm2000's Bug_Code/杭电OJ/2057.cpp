#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    long long n, m;
    while (cin >> hex >> n >> m)
    {
        n += m;
        if (n >= 0)
            cout << setiosflags(ios::uppercase) << hex << n << endl;
        else
            cout << '-' << setiosflags(ios::uppercase) << hex << -n << endl;
    }
    return 0;
}
