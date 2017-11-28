#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int> > g(m,vector<int>(2,13));
	
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		g[a][b]=1;
		g[b][a]=1;
	}
	
	for(int k=0;i<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
			}
		}
	}
	
	