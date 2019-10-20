#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int n, h1, h2, m1, m2, s1, s2,h,m,s;
    cin >> n;
    while(n>0){
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    s = s1 + s2;
    if (s > 59) {
        m1 += s / 60;
        s -= (s / 60)*60;
    }
    m = m1 + m2;
    if (m > 59) {
        h1 += m / 60;
        m -= (m / 60) * 60;
    }
    h = h1 + h2;
    cout << h << ' ' << m << ' ' << s << endl;
        n--;
    }
    return 0;
}
