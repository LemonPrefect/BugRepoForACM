#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
//0=w 1=b
int num[101][101],n;
int build(int x, int y, int t) {
	num[x][y] = t;
	if (t == 0) {
		if (num[x + 2][y + 1] == -1 && x + 2 >= 1 && x + 2 <= n && y + 1 >= 1 && y + 1 <= n) {
			build(x + 2, y + 1, 1);
		}
		if (num[x + 2][y - 1] == -1 && x + 2 >= 1 && x + 2 <= n && y - 1 >= 1 && y - 1 <= n) { 
			build(x + 2, y - 1, 1);
		}
		if (num[x - 2][y + 1] == -1 && x - 2 >= 1 && x - 2 <= n && y + 1 >= 1 && y + 1 <= n) {
			build(x - 2, y + 1, 1);
		}
		if (num[x - 2][y - 1] == -1 && x - 2 >= 1 && x - 2 <= n && y - 1 >= 1 && y - 1 <= n) {
			build(x - 2, y - 1, 1);
		}
		if (num[x + 1][y - 2] == -1 && x + 1 >= 1 && x + 1 <= n && y - 2 >= 1 && y - 2 <= n) {
			build(x + 1, y - 2, 1);
		}
		if (num[x + 1][y + 2] == -1 && x + 1 >= 1 && x + 1 <= n && y + 2 >= 1 && y + 2 <= n) {
			build(x + 1, y + 2, 1);
		}
		if (num[x - 1][y - 2] == -1 && x - 1 >= 1 && x - 1 <= n && y - 2 >= 1 && y - 2 <= n) {
			build(x - 1, y - 2, 1);
		}
		if (num[x - 1][y + 2] == -1 && x - 1 >= 1 && x - 1 <= n && y + 2 >= 1 && y + 2 <= n) {
		    build(x - 1, y + 2, 1);
		}
	}
	else {
		if (num[x + 2][y + 1] == -1 && x + 2 >= 1 && x + 2 <= n && y + 1 >= 1 && y + 1 <= n) {
			build(x + 2, y + 1, 0);
		}
		if (num[x + 2][y - 1] == -1 && x + 2 >= 1 && x + 2 <= n && y - 1 >= 1 && y - 1 <= n) {
			build(x + 2, y - 1, 0);
		}
		if (num[x - 2][y + 1] == -1 && x - 2 >= 1 && x - 2 <= n && y + 1 >= 1 && y + 1 <= n) {
			build(x - 2, y + 1, 0);
		}
		if (num[x - 2][y - 1] == -1 && x - 2 >= 1 && x - 2 <= n && y - 1 >= 1 && y - 1 <= n) {
			build(x - 2, y - 1, 0);
		}
		if (num[x + 1][y - 2] == -1 && x + 1 >= 1 && x + 1 <= n && y - 2 >= 1 && y - 2 <= n) {
			build(x + 1, y - 2, 0);
		}
		if (num[x + 1][y + 2] == -1 && x + 1 >= 1 && x + 1 <= n && y + 2 >= 1 && y + 2 <= n) {
			build(x + 1, y + 2, 0);
		}
		if (num[x - 1][y - 2] == -1 && x - 1 >= 1 && x - 1 <= n && y - 2 >= 1 && y - 2 <= n) {
			build(x - 1, y - 2, 0);
		}
		if (num[x - 1][y + 2] == -1 && x - 1 >= 1 && x - 1 <= n && y + 2 >= 1 && y + 2 <= n) {
			build(x - 1, y + 2, 0);
		}
	}
	return 0;
}
int main() {
	int k,t,i,ii;
	while (cin >> n) {
		for (i = 1; i <= n; i++) {
			for (ii = 1; ii <= n; ii++) {
				num[i][ii] = -1;
			}
		}
		build(1, 1, 0);
		for (i = 1; i <= n; i++) {
			for (ii = 1; ii <= n; ii++) {
				if (num[i][ii] == 1)cout << "B";
				if (num[i][ii] == 0)cout << "W";
				if (num[i][ii] == -1)cout << "B";
			}
			cout << endl;
		}
	}
	return 0;
}
