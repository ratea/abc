#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int q,h,s,d;
	cin>>q>>h>>s>>d;
	long long int n;
	cin>>n;
	
	long long int a,b,c,e;
	a=q*4*n;
	b=h*2*n;
	c=s*n;
	if(n%2==0){
		e=d*(n/2);
	}else{
		long long int n2=n/2+1;
		e=min((n2-1)*d+4*q,min((n2-1)*d+2*h,(n2-1)*d+s));
	}
	
	long long int ans=min(a,min(b,min(c,e)));
	
	cout<<ans<<endl;
	
	return 0;
}