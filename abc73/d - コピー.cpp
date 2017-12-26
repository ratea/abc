#include "bits/stdc++.h"
using namespace std;

long long int inf=1e9+7;

int dfs

int main(){
	int n,m,R;
	cin>>n>>m>>R;
	vector<int> r(R);
	for(int i=0;i<R;i++)cin>>r[i];
	vector<vector<int> > g(n,vector<int>n(inf));
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		a--;
		b--;
		g[a][b]=c;
		g[b][a]=c;
	}
	for(int i=0;i<n;i++)g[i][i]=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
			}
		}
	}