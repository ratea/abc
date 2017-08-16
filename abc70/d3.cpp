#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<pair<int,int> > g[n];
	for(int i=0;i<n-1;i++){
		int a,b,c;
		cin>>a>>b>>c;
		a--;
		b--;
		g[a].push_back({b,c});
		g[b].push_back({a,c});
	}
	
	int q,k;
	cin>>q>>k;
	k--;
	
	queue<int> p;
	p.push(k);
	vector<int> used(n,0);
	used[k]=1;
	vector<long long int> dis(n,1000000000009);
	dis[k]=0;
	while(p.empty()==0){
		int np=p.front();
		p.pop();
		for(int i=0;i<g[np].size();i++){
			if(used[g[np][i].first]==0){
				p.push(g[np][i].first);
				dis[g[np][i].first]=dis[np]+g[np][i].second;
				used[g[np][i].first]=1;
				//cout<<g[np][i].second<<" "<<np<<" "<<dis[np]<<" "<<g[np][i].first<<" "<<dis[np]<<" "<<g[g[np][i].first][i].second<<endl;
			}
		}
	}
	
	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		cout<<dis[x]+dis[y]<<endl;
	}
	
	return 0;
}