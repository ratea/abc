#include "bits/stdc++.h"
using namespace std;

vector<long long int> G[100002];
vector<long long int> c(1e5+2,-1);
int nib=0;
vector<long long int> co(2,0);

int nibu(long long int p,long long int x){
	for(long long int i=0;i<G[p].size();i++){
		if(c[G[p][i]]==-1){
			c[G[p][i]]=abs(x-1);
			co[abs(x-1)]++;
			nibu(G[p][i],abs(x-1));
		}else if(c[G[p][i]]==x){
			nib=1;
		}
	}
	return 0;
}

int main(){
	long long int n,m;
	cin>>n>>m;
	for(long long int i=0;i<m;i++){
		long long int a,b;
		cin>>a>>b;
		a--;
		b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	c[0]=0;
	co[0]++;
	nibu(0,0);
	
	if(nib==0){
		cout<<co[0]*co[1]-m<<endl;
	}else{
		cout<<n*(n-3)/2-m+n<<endl;
	}
	return 0;
}