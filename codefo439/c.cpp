#include "bits/stdc++.h"
using namespace std;

long long int mod=998244353;

int main(){
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int ab,bc,ca;
	ab=a*b%mod;
	bc=b*c%mod;
	ca=c*a%mod;
	long long int ans=ab+bc+ca+1;
	ans%=mod;
	
	long long int a1=a-1;
	if(a1<0)a1=0;
	long long int a2=a-2;
	if(a2<0)a2=0;
	
	long long int b1=b-1;
	if(b1<0)b1=0;
	long long int b2=b-2;
	if(b2<0)b2=0;
	
	long long int c1=c-1;
	if(c1<0)c1=0;
	long long int c2=c-2;
	if(c2<0)c2=0;
	
	ans+=ab*((a1)*(b1))%mod;
	ans%=mod;
	ans+=bc*((b1)*(c1))%mod;
	ans%=mod;
	ans+=ca*((c1)*(a1))%mod;
	ans%=mod;
	ans+=ab*bc;
	ans%=mod;
	ans+=bc*ca;
	ans%=mod;
	ans+=ca*ab;
	ans%=mod;
	
	ans+=ca*((c1)*(a1))%mod*(c2)*(a2)%mod;
	ans%=mod;
	ans+=ab*((a1)*(b1))%mod*(a2)*(b2)%mod;
	ans%=mod;
	ans+=bc*((b1)*(c1))%mod*(b2)*(c2)%mod;
	ans%=mod;
	ans+=ab*bc*ca%mod;
	ans%=mod;
	ans+=ab*((a1)*(b1))%mod*(bc+ca)%mod;
	ans%=mod;
	ans+=bc*((b1)*(c1))%mod*(ab+ca)%mod;
	ans%=mod;
	ans+=ca*((c1)*(a1))%mod*(bc+ab)%mod;
	ans%=mod;
	
	cout<<ans<<endl;
	return 0;
}