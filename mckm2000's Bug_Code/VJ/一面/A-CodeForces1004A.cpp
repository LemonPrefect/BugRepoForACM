#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<stdlib.h>

using namespace std;
int main(){
	long long n,d,t,x[1000],a,b,c,e,result,f;
	while(cin>>n>>d){
		if(n > 1){
		t=0;
		while(t<n){
			cin>>f;
			if(t!=0){
				if(f < x[t-1]){
					x[t] = x[t-1];
					x[t-1] = f;
				}else{
					x[t] = f;
				}
			}else{
				x[t] = f;
			}
			t++;
		}
	result = 2;
	if(x[1] >= x[0] +d+d)result++;
	if(x[n-2] + d+d < x[n-1])result++;
	 for(a =1;a<n-1;a++){
	 	b = x[a] + d;
		c = x[a] - d; 
		if(x[a+1] - d>=b && b!=x[a+1])result++;
		if(x[a-1] + d< c && c!=x[a-1])result++;
	 }
	 cout<<result<<endl;
	}else{
		cout<<2<<endl;
	}
}
	return 0;
} 
