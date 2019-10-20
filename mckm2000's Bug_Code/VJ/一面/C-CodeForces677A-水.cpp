#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<stdlib.h>

using namespace std;
int main(){
	long long n,d,x,result;
	while(cin>>n>>d){
		result = 0;
	while(n>0){
		cin>>x;
		if(x > d)result += 2;
		else result++;
		n--;
	}
	cout<<result<<endl;
	}
	return 0;
} 
