#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> dp(n+1,1);
	vector<int> red(n+1,0);
	red[1]=1;
	
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		dp[y]++;
		dp[x]--;
		if(red[x]==1){
			red[y]=1;
		}
		if(dp[x]==0){
			red[x]=0;
		}
	}
	
	int ans=0;
	
	for(int i=0;i<n+1;i++)if(red[i]!=0)ans++;
	
	cout<<ans<<endl;
	return 0;
	
}