#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,ma,mb;
	cin>>n>>ma>>mb;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);
	for(int i=0;i<n;i++)cin>>a[i]>>b[i]>>c[i];
	
	vector<vector<vector<int> > > dp(50,vector<vector<int> >(500,vector<int>(500,1e9)));
	dp[0][0][0]=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<401;j++){
			for(int k=0;k<401;k++){
				if(dp[i][j][k]!=1e9){
					dp[i+1][j][k]=min(dp[i][j][k],dp[i+1][j][k]);
					dp[i+1][j+a[i]][k+b[i]]=min(dp[i][j][k]+c[i],dp[i+1][j+a[i]][k+b[i]]);
				}
			}
		}
	}
	int ans=1e9;
	for(int i=1;i<500;i++){
		for(int j=1;j<500;j++){
			if(i*mb==j*ma){
				ans=min(ans,dp[n][i][j]);
			}
		}
	}
	
	if(ans!=1e9){
		cout<<ans<<endl;
	}else{
		cout<<-1<<endl;
	}
}