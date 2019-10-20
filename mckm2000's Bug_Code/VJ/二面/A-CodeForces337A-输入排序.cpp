#include <iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;


int main() {
	int n,i,m,num[100],ps,a,min,t;
while(cin>>n>>m){
	t=0;
	min = -1;
while(t<m){
	cin>>num[t];
	for(i=t-1;i>=0;i--){
		if(num[i+1] < num[i]){
			ps = num[i];
			num[i] = num[i+1];
			num[i+1] = ps;
		}else{
			break;
		}
	}
	t++;
}
for(a=0;a<=m-n;a++){
	if(min == -1)min = num[a+n-1] - num[a];
	if(num[a+n-1] - num[a] < min)min = num[a+n-1] - num[a];
}
cout<<min<<endl;
}
	return 0;
}
