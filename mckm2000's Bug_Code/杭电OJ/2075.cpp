#include <iostream>    
#include <algorithm>   
using namespace std;

int main() {
    int a,b,n;
    cin >> n;
    while (n > 0) {
        cin >> a>>b;
        if (b > a) {
            cout << "NO" << endl;
        }
        else {
            if (a % b == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        n--;
    }
    return 0;
}
