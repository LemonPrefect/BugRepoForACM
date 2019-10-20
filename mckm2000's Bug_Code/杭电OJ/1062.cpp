#include<stdio.h>
#include<string.h> 
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	getchar();
	while (num--)
	{
		char ch[1000];
		int len;
		cin.getline(ch, 1000);
		len = strlen(ch);
		int a = 0;
		int b = 0;
		int d = 0;
		char c;
		while (a <= len)
		{
			if (ch[a] == ' ' || ch[a] == '\0')
			{
				d = a - 1;
				while (d > b)
				{
					c = ch[d];
					ch[d] = ch[b];
					ch[b] = c;
					b++;
					d--;
				}
				b = a + 1;
			}
			a++;
		}
		cout << ch << endl;
	}
}