#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a[n+1];
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	
	for(int k=1;k<n+1;k++){
		set<int> st;
		for(int i=0;i<a[k].size();i++){
			for(int j=0;j<a[a[k][i]].size();j++){
				st.insert(a[a[k][i]][j]);
			}
		}
		cout<<a[k].size()<<endl;
		cout<<st.size()-a[k].size()<<endl;
	}
	
	return 0;
}