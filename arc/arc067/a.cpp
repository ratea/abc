#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector<int> pri(n+1,1);
	pri[0]=0;
	pri[1]=0;
	for(int i=2;i<n+1;i++){
		if(pri[i]==1){
			for(int j=i*2;j<n;j+=i)pri[j]=0;
		}
	}
	
	vector<int> ans(n+1,0);
	
	for(int i=2;i<n+1;i++){
		int x=i;
		for(int j=2;j<x+1;j++){
			if(pri[j]==1){
				while(x%j==0){
					x/=j;
					ans[j]++;
				}
			}
		}
	}
	
	long long int anse=1;
	int mod=1e9+7;
	for(int i=2;i<=n;i++){
		if(ans[i]!=0){
			//cout<<ans[i]<<" "<<i<<endl;
			anse*=(ans[i]+1);
		}
		anse%=mod;
	}
	
	cout<<anse<<endl;
	
	return 0;
}