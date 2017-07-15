#include "bits/stdc++.h"
using namespace std;
#define mod 1000000007

long powmod(long a,long p){
	long ans = 1;
	long mul = a;
	for(;p > 0; p >>= 1, mul = (mul * mul) % mod){
		if((p & 1) == 1) ans = (ans * mul) % mod;
	}
	return ans;
}

int main(){
	long long int w,h;
	cin>>w>>h;
	long long int ans=1;
	
	for(int i=w+h;i>h;i--)ans*=i%mod;
	for(int i=1;i<h-1;i++)ans=ans*powmod(i,mod)%mod;
	cout<<ans<<endl;
	return 0;
}