#include <iostream> 
#include<stdio.h> 
#include<cstring> 
#include<math.h> 
#include<iomanip> 
#include<cstdlib> 
using namespace std;
char str[101][101], result[101];
int main()
{
	int len, max = 0, i = 0, a, d, b, c, e, sum,f;
	while (cin.getline(str[i], 101)) {
		len = strlen(str[i]);
		if (str[i][0] == '0' && len == 1)break;
		else {
			sscanf(str[i], "0%s", str[i]);
			len = strlen(str[i]);
			if (len == 0)str[i][0] = '0';
			len = strlen(str[i]);
		}
			
		if (max < len)max = len;
		i++;
	}
	for (a = 0; a < i; a++) {
		len = strlen(str[a]);
		d = max - len;
		for (b = max - 1; b >= 0; b--) {
			if (b < d)str[a][b] = 48;
			else str[a][b] = str[a][b-d];
			
		}
	}
	c = 0;
	for (b = max - 1; b >= 0; b--) {
		sum = 0;
		for (f = 0; f < i; f++) {
			e = (str[f][b] - 48);
			sum += e;
		}
		sum += c;
		c = sum / 10;
		result[b] = (sum % 10) + 48;
	}
	if (c != 0)printf("%d", c);
	for (a = 0; a < max; a++)printf("%c", result[a]);
	printf("\n");
	return 0;
}
