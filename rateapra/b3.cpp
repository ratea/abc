#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int> > edge(n,vector<int>(n,100));
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		edge[a][b]=1;
		edge[b][a]=1;
	}
	for(int i=0;i<n;i++)edge[i][i]=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				edge[i][j]=min(edge[i][j],edge[i][k]+edge[k][j]);
			}
		}
	}
	
	for(int i=0;i<n;i++){
		int ans=0;
		for(int j=0;j<n;j++){
			if(edge[i][j]==2)ans++;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}