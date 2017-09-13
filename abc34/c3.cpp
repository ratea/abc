#include "bits/stdc++.h"
using namespace std;

long long int powmod(long long int a,int n,long long m){
	long long int r=1;
	while(n){
		if(n&1)(r*=a)%=m;
		(a*=a)%=m;
		n>>=1;
	}
	return r;
}

int main(){
	long long int mod=1e9+7;
	int w,h;
	cin>>w>>h;
	long long int ans=1;
	
	for(int i=1;i<h+w-1;i++)ans=ans*i%mod;
	for(int i=1;i<h;i++)ans=(ans*powmod(i,1e9+7-2,1e9+7))%mod;
	for(int i=1;i<w;i++)ans=(ans*powmod(i,1e9+7-2,1e9+7))%mod;
	
	cout<<ans<<endl;
	return 0;
}