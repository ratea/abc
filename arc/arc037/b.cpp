#include "bits/stdc++.h"
using namespace std;

int ans=0;
vector<int> used(102,0);
vector<int> gone(102,0);
int flag=0;

int dfs(int a,vector<int> *G,int b){
	if(flag==1)return 1;
	for(int i=0;i<G[a].size();i++){
		if(used[G[a][i]]==0){
			used[G[a][i]]=1;
			gone[G[a][i]]=1;
			flag=dfs(G[a][i],G,a);
			used[G[a][i]]=0;
		}else if(G[a][i]!=b){
			//cout<<G[a][i]<<endl;
			return 1;
		}
	}
	return flag;
}

int main(){
	int n,m;
	cin>>n>>m;
	
	vector<int> G[n+2];
	
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	for(int i=0;i<n;i++){
		if(gone[i]==0){
			flag=0;
			gone[i]=1;
			used[i]=1;
			flag=dfs(i,G,-1);
			if(flag==0)ans++;
		}
	}
	
	cout<<ans<<endl;
	return 0;
}