#include <iostream> 
#include<stdio.h> 
#include<cstring> 
#include<math.h> 
#include<iomanip> 
#include<cstdlib> 
using namespace std;

int main()
{
    int A, B, n, result,i,j;
    int num[1000];
    num[1] = num[2] = 1;
    while (cin >> A >> B >> n && (A != 0 || B != 0 || n != 0)) {
        num[0] = num[1] = num[2]= 1;
        j = 48;
        A %= 7;
        B %= 7;
        for (i = 3; i <= 500; i++) {
            num[i] = (A * num[i - 1] + B * num[i - 2]) % 7;
            if (num[i] == 1 && num[i - 1] == 1 && j == 48)j = i - 2;
        }
        if (n % j == 0)cout << num[j] << endl;
        else cout << num[n % j] << endl;
    }
    return 0;
}
