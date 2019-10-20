#include <iostream> 
#include<stdio.h> 
#include<cstring> 
#include<math.h> 
#include<iomanip> 
#include<cstdlib> 
using namespace std;
int gcd(int a, int b) {
    if (b > a) {
        int c = a;
        a = b;
        b = c;
    }
    if (b == 0) {
        return a;
    }else {
        gcd(b, a % b);
    }
}
int main()
{
    int a, b;
    while (cin >> a >> b) {
        cout << (a / gcd(a, b)) * b << endl;
    }
    return 0;
}
