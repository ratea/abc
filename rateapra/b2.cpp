#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a[n];
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	
	for(int k=0;k<n;k++){
		set<int> st;
		for(int i=0;i<a[k].size();i++){
			for(int j=0;j<a[a[k][i]].size();j++){
				int ch=0;
				for(int l=0;l<a[k].size();l++){
					if(a[k][l]==a[a[k][i]][j]){
						ch=1;
						break;
					}
				}
				if(ch==0)st.insert(a[a[k][i]][j]);
			}
		}
		cout<<st.size()-1<<endl;
	}
	return 0;
}