#include "bits/stdc++.h"
using namespace std;

long long int mod=1e9+7;
long long int dp;
vector<long long int> p(1e5*2+1);
vector<long long int> ji(1e5*2+1,0);
long long int score;

long long int kai(long long int x,long long int y){
	long long int tmp=1;
	for(int i=1;i<=x;i++)tmp*=y;
	return tmp;
}

long long int dfs(long long int i){
	score*=kai(ji[i],2);
	score%=mod;
	if(i==0&&p[i]==0){
		return 0;
	}
	dfs(p[i]);
	return 0;
}

long long int powmod(long long int a, long long int b, long long int p){
  if( b == 0 ) return 1;
  if( b%2 == 0 ){
    long long int d = powmod(a, b/2, p);
    return ((d%p) * (d%p)) % p;
  }
  return ( (a%p) * (powmod(a, b-1, p)%p) ) % p;
}

int main(){
	long long int n;
	cin>>n;
	p[0]=0;
	for(long long int i=1;i<n+1;i++){
		cin>>p[i];
		ji[p[i]]++;
	}
	long long int ans=1;
	
	
	
	for(long long int i=1;i<n+1;i++){
		score=1;
		dfs(p[i]);
		ans+=(powmod(score,mod-2,mod))%mod;
		ans%=mod;
		//cout<<i<<" "<<ans<<endl;
	}
	for(long long int i=0;i<n;i++){
		ans*=2;
		ans%=mod;
	}
	
	cout<<ans<<endl;
	
	
	
	return 0;
}