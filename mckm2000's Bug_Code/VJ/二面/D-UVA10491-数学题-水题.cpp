#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;


int main() {
	double a,b,c,result1,result2;
	
while(cin>>a>>b>>c){
	result1 = b/(a+b);
	result1 *= (b-1)/(a+b-1-c); 
	result2 = a/(a+b);
	result2 *= (b/(a+b-1.00000-c));
	cout<<fixed<<setprecision(5);
	cout<<result1 + result2<<endl;
}
	return 0;
}
