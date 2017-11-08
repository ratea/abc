#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int m=0;
	
	vector<int> G[n+2];
	
	for(int i=0;i<n;i++){
		int p;
		cin>>p;
		m+=p;
		for(int j=0;j<p;j++){
			int a;
			cin>>a;
			G[i].push_back(a);
		}
	}
	
	int cnt=0;
	
	vector<int> ban(n+2,0);
	
	m/=2;
	
	vector<int> l(m);
	vector<int> r(m);
	
	int loop=0;
	
	while(cnt<m-1){
		for(int i=1;i<n+1;i++){
			if(G[G[i][ban[i]]][ban[G[i][ban[i]]]]==i){
				cout<<i<<" "<<G[i][ban[i]]<<endl;
				r[cnt]=G[i][ban[i]];
				l[cnt]=i;
				ban[G[i][ban[i]]]++;
				ban[i]++;
				cnt++;
			}
		}
		//loop++;
		if(loop>m){
			cout<<-1<<endl;
			return 0;
		}
	}
	
	for(int i=0;i<m;i++){
		cout<<l[i]<<" "<<r[i]<<endl;
	}
	
	
	return 0;
}