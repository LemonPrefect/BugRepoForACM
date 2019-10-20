#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    float high[101],max;
    int sssbbb,n;
    cin >> sssbbb;
    while (sssbbb > 0) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> high[i];
        }
        max = high[0];
        for (int i = 0; i < n; i++) {
            if (high[i] > max)max = high[i];
        }
        cout << fixed <<showpoint<< setprecision(2);
        cout << max << endl;
        sssbbb--;
    }
    return 0;
}
