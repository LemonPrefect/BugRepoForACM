#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;




int main() {
    char arr[1000];
    int len, a,b,n;
    int c,d,e,f,g,result;
    cin >> n;
    getchar();
    while (cin.getline(arr, 1000)) {
        len = strlen(arr)-1;
        result = 0;
        for (a = 0; a <= len;a++) {
            b = arr[a];
            if (b < 0) {
                result++;
        }
        }
        cout << result / 2 << endl;
    }
    return 0;
}
