#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;


int main() {
	int n,i,m,num[100],ps,a,b,c,min,t;
while(cin>>n){
if(n%7 == 0){
	n/=7;
	while(n--){
		cout<<7;
	}
	cout<<endl;
}else{
	if(n%7 !=0 && (n%7)%4 == 0){
		a = (n%7)/4;
		b = n/7;
		while(a--)cout<<4;
		while(b--)cout<<7; 
		cout<<endl;
	}else{
		a = (n%7)%4;
		b = n/7;
		c = (n%7)/4;
		min = 0;
		for(t = 1;t<=b;t++){
			if((a + 7 * t) % 4 == 0){
				b -= t;
				c += (a + 7 * t) / 4;
				min = 1;
				break;
			}
		}
		if(min == 0)cout<<-1<<endl;
		else {
		while(c--)cout<<4;
		while(b--)cout<<7;
		cout<<endl;
		}
	}
}
 
}
	return 0;
}
