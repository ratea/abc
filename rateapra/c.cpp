#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> b[n];
	for(int i=1;i<n;i++){
		int a;
		cin>>a;
		a--;
		b[a].push_back(i);
	}
	
	vector<int> m(n,1);
	int inf=100000000;
	for(int i=n-1;i>-1;i--){
		int ma=0;
		int mi=inf;
		for(int j=0;j<b[i].size();j++){
			ma=max(ma,m[b[i][j]]);
			mi=min(mi,m[b[i][j]]);
			//cout<<m[b[i][j]]<<" "<<ma<<" "<<mi<<endl;
		}
		if(b[i].size()==0){
			m[i]=1;
		}else{
			//cout<<ma<<" "<<mi<<endl;
			m[i]=ma+mi+1;
		}
	}
	cout<<m[0]<<endl;
	
	return 0;
}