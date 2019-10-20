#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;


int main() {
    char str[100];
    int len, a,b,n;
    int c,d,e,f,g;
    cin >> n;
    getchar();
    for(int z = 1;z<=n;z++){
    cin.getline(str, 100); 
        len = strlen(str);
        c = d = e = f = g = 0;
        for (a = 0; a < len; a++) {
            if (str[a] == 'a')c++;
            if (str[a] == 'e')d++;
            if (str[a] == 'i')e++;
            if (str[a] == 'o')f++;
            if (str[a] == 'u')g++;
        }
        cout << "a:" << c << endl;
        cout << "e:" << d << endl;
        cout << "i:" << e << endl;
        cout << "o:" << f << endl;
        cout << "u:" << g <<endl;
        if (z != n)cout << endl;
    }
    return 0;
}
