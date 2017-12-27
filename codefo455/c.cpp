#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<vector<long long int> > dp(n+2,vector<long long int>(n+2,0));
	long long int mod=1e9+7;
	dp[0][0]=1;
	char c;
	for(long long int i=0;i<n;i++){
		cin>>c;
		if(c=='f'){
			for(long long int j=0;j<n+1;j++){
				dp[i+1][j+1]=dp[i][j];
				dp[i+1][j+1]%=mod;
			}
		}else{
			long long int tmp=0;
			for(long long int j=n;j>=0;j--){
				tmp+=dp[i][j];
				dp[i+1][j]+=tmp;
				dp[i+1][j]%=mod;
			}
		}
	}
	
	/*
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	
	
	long long int ans=0;
	for(long long int i=0;i<n;i++){
		ans+=dp[n-1][i];
		ans%=mod;
	}
	cout<<ans<<endl;
	
	
	
}