#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<long long int> imos(m+1,0);
	
	long long int sum=0;
	
	for(int i=0;i<n;i++){
		int l,r,s;
		cin>>l>>r>>s;
		l--;
		r--;
		imos[l]+=s;
		imos[r+1]-=s;
		sum+=s;
	}
	
	long long int mi=1e9+7;
	long long int ma=0;
	long long int tm=0;
	
	for(int i=0;i<m;i++){
		tm+=imos[i];
		mi=min(mi,tm);
		ma=max(ma,tm);
	}
	
	cout<<sum-mi<<endl;
	return 0;
}