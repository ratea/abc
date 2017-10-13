#include "bits/stdc++.h"
using namespace std;

vector<int> G[100002];
int ans=0;
vector<int> used(100002,0);

int dfs(int a){
	for(int i=0;i<G[a].size();i++){
		if(used[G[a][i]]==0){
			used[G[a][i]]=1;
			dfs(G[a][i]);
			//used[G[a][i]]=0;
		}
	}
	return 0;
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	for(int i=0;i<n;i++){
		if(used[i]==0){
			used[i]=1;
			ans++;
			dfs(i);
		}
	}
	
	cout<<ans-1<<endl;
	return 0;
}