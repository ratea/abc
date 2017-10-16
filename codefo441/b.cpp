#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,k,m;
	cin>>n>>k>>m;
	map<int,int> mp;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]%m]++;
	}
	
	int x=0;
	
	for(int i=0;i<m;i++){
		if(mp[i]>=k){
			cout<<"Yes"<<endl;
			for(int j=0;j<n;j++){
				if(a[j]%m==i){
					cout<<a[j];
					x++;
					if(x!=k){
					cout<<" ";
				}else{
					cout<<endl;
					return 0;
				}
				}
			}
		}
	}
	
	cout<<"No"<<endl;
	
	return 0;
}