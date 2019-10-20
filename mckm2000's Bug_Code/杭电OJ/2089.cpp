#include <iostream>    
#include <algorithm>   
using namespace std;
int num[1000005];
int printList(){
    int i, a, b;
    for ( i = 1; i <= 1000004; i++) {
        num[0] = 0;
         a = i;
         while (a > 0) {
             b = a % 10;
             a = a / 10;
             if (b == 4) {
                 num[i] = num[i - 1] + 1;
                 break;
             }
             if (b == 2 && (a % 10) == 6) {
                 num[i] = num[i - 1] + 1;
                 break;
             }
             num[i] = num[i-1];
         }
    }
    return 0;
}
int main() {
    int a,b;
    printList();
    while (cin >> a >> b && (a!=0 && b!=0)) {
        cout << b - a + 1 - (num[b] - num[a - 1]) << endl;
    }
    return 0;
}
