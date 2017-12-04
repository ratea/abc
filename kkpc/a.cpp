#include "bits/stdc++.h"
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int n;
	cin>>n;
	
	a=n-a;
	b=2*n-b;
	c=3*n-c;
	
	if(a<0)a=0;
	if(b<0)b=0;
	if(c<0)c=0;
	
	cout<<a<<" "<<b<<" "<<c<<endl;
	
	return 0;
}