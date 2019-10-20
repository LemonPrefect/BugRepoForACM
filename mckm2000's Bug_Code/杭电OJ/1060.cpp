#include <iostream> 
#include<stdio.h> 
#include<cstring> 
#include<math.h> 
#include<iomanip> 
#include<cstdlib> 
using namespace std;

int main()
{
    int n,i,c;
    long long a;
    double b;
    while (cin >> n) {
        while (n--) {
            cin >> a;
            b = a* log10((double)a);
            b -= (__int64)b;
            b = pow(10, b);
            cout << (__int64)b << endl;
        }
    }
    return 0;
}
