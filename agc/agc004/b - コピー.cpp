#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,x;
	cin>>n>>x;
	vector<vector<long long int> > wf(n+1,vector<long long int>(n+1,1e9));
	for(int i=1;i<n+1;i++){
		int a;
		cin>>a;
		wf[0][i]=a;
	}
	for(int i=1;i<n;i++){
		wf[i][i+1]=x;
	}
	wf[n][1]=x;
	
	vector<vector<long long int> > fwf(n+1,vector<long long int>(n+1));
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1;j++){
			fwf[i][j]=j;
		}
	}
	
	for(int k=0;k<=n;k++){
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				if(wf[i][j]>wf[i][k]+wf[k][j]){
					wf[i][j]=wf[i][k]+wf[k][j];
					fwf[i][j]=fwf[i][k];
				}
			}
		}
	}
	
	long long int ans=0;
	long long int maxr=0;
	for(int i=1;i<n+1;i++){
		//cout<<wf[0][fwf[0][i]]<<" "<<wf[0][i]-wf[0][fwf[0][i]]<<endl;
		ans+=wf[0][fwf[0][i]];
		maxr=max(maxr,wf[0][i]-wf[0][fwf[0][i]]);
	}
	cout<<ans+maxr<<endl;
}