#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector<int> dp(10001,0);
	dp[0]=1;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		for(int j=10000;j>=0;j--){
			if(dp[j]==1)dp[j+a]=1;
		}
	}
	
	int ans=0;
	
	for(int i=0;i<10001;i++)if(dp[i]==1)ans++;
	cout<<ans<<endl;
	return 0;
}