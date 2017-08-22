#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	
	long long int A=1;
	long long int B=1;
	long long int as=1;
	long long int t,a;
	long long int x;
	
	for(int i=0;i<n;i++){
		cin>>t>>a;
		x=max((A+t-1)/t,(B+a-1)/a);
		A=x*t;
		B=x*a;
	}
	
	cout<<A+B<<endl;
	return 0;
}