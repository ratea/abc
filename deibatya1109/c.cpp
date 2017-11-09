#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int q,h,s,d,n;
	cin>>q>>h>>s>>d>>n;
	
	long long int a,b,c,e;
	a=4*q*n;
	b=2*h*n;
	c=s*n;
	e=d*(n/2);
	
	
	
	if(n%2==0){
		cout<<min(a,min(b,min(c,e)))<<endl;
	}else{
		e+=min(4*q,min(2*h,s));
		//cout<<a<<" "<<b<<" "<<c<<" "<<e<<endl;
		cout<<min(a,min(b,min(c,e)))<<endl;
	}
	
	
	return 0;
}