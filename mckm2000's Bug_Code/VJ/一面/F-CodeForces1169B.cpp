#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
long long num[400000][2];
int main() {
	int n, t,a,b,c,d,gg,x,y,i,xx,yy,tt,tt1,z,zz,z1,zz1;
	while (cin >> n >> t) {
		memset(num, 0, sizeof(num));
		a = 0;
		while (a < t) {
			cin >> num[a][0] >> num[a][1];
			a++;
		}
		x = num[0][0];
		y = num[0][1];
		gg = 0;
		tt = 0;
		xx = 0;
		yy = 0;
		for (i = 1; i < t; i++) {
			z = 0;
			if (xx == 0 && yy == 0) {
				if (num[i][0] != x && num[i][1] != x) {
					xx = num[i][0];
					yy = num[i][1];
					tt = i;
				}
			}
			else {
				if (num[i][0] != x && num[i][0] != xx && num[i][1] != x && num[i][1] != xx) {
					z = 1;
					break;
				}
			}
		}
		if (xx == 0 && yy == 0) {
			gg = 1;
		}else{
			if (z == 1) {
				for (i = tt + 1; i < t; i++) {
					zz = 0;
					if (num[i][0] != x && num[i][0] != yy && num[i][1] != x && num[i][1] != yy) {
						zz = 1;
						break;
					}
				}
				if (zz == 0)gg = 1;
			}
			else {
				gg = 1;
			}
		}
		if (gg == 0) {
			tt = 0;
			xx = 0;
			yy = 0;
			for (i = 1; i < t; i++) {
				z = 0;
				if (xx == 0 && yy == 0) {
					if (num[i][0] != y && num[i][1] != y) {
						xx = num[i][0];
						yy = num[i][1];
						tt = i;
					}
				}
				else {
					if (num[i][0] != y && num[i][0] != xx && num[i][1] != y && num[i][1] != xx) {
						z = 1;
						break;
					}
				}
			}
			if (xx == 0 && yy == 0) {
				gg = 1;
			}
			else {
				if (z == 1) {
					for (i = tt + 1; i < t; i++) {
						zz = 0;
						if (num[i][0] != y && num[i][0] != yy && num[i][1] != y && num[i][1] != yy) {
							zz = 1;
							break;
						}
					}
					if (zz == 0)gg = 1;
				}
				else {
					gg = 1;
				}
			}
		}
		if (gg == 0)cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
