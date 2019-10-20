#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main() {
	long long a,max,result,i;
while(cin>>a){
	if(a<1000003){
		result = 1;
		for(i=1;i<=a;i++){
		result = ((result %1000003)*(i%1000003))%1000003;
	}
cout<<result<<endl;
	}else cout<<0<<endl;
}
	return 0;
}
