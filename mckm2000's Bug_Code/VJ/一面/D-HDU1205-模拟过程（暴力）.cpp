#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<stdlib.h>

using namespace std;
int main(){
	long long n,d,x,result,f,g,i,tt,re;
	int t;
	scanf("%lld",&n);
	while(scanf("%lld",&d)!=EOF){
		t=0;
		scanf("%lld",&f);
		tt = f-1;
		re = 2;
		while(t<d-1){
			scanf("%lld",&f);
			if(tt >= f){
			tt -= f ;
			}else{
			g = f- tt;
			if(g > re){
				tt = g- re;
			}
			re += ((f-tt)*2);
			}
			t++;
		}
		 	 if(tt <= 0)printf("Yes\n");
		 	 else printf("No\n");
	}
	return 0;
} 
