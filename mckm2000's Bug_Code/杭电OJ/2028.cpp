#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int getmin(int a ,int b) {
    int c;
    if (a > b) {
        c = a % b;
        if (c != 0) {
            getmin(b, c);
        }
        else {
            return b;
        }
    }
    else {
        c = b % a;
        if (c != 0) {
            getmin(a, c);
        }
        else {
            return a;
        }
    }
}


int main() {
    int arr[100];
    int len, a,b,n;
    int c,d,e,f,g,gcq,max,min;
    while (cin >> n) {
        for (a = 0; a < n; a++) {
            cin >> arr[a];
        }
        min = getmin(arr[0], arr[1]);
        max = arr[0] * (arr[1] / min);
        for (a = 1; a < n; a++) {
            min = getmin(max, arr[a]);
            max = arr[a] * (max / min);
        }
        cout << max << endl;
    }
    return 0;
}
