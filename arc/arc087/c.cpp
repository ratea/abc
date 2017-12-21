#include "bits/stdc++.h"
using namespace std;

int main(){
	map<int,int> mp;
	
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	
	int ans=0;
	
	/*
	for(int i=0;i<n;i++){
		if(a[i]<mp[a[i]]){
			ans+=mp[a[i]]-a[i];
		}else if(a[i]>mp[a[i]]){
			ans+=mp[a[i]];
		}
	}
	*/
	
	for(auto &el:mp){
		if(el.first<el.second){
			ans+=el.second-el.first;
		}else if(el.first>el.second){
			ans+=el.second;
		}
	}
	
	cout<<ans<<endl;
}