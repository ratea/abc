#include "bits/stdc++.h"
using namespace std;

int main(){
	map<char,int> mp;
	string s;
	cin>>s;
	
	for(int i=0;i<26;i++){
		mp['a'+i]=0;
	}
	
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
	}
	
	char minc;
	int minm=100000;
	char maxc;
	int maxm=0;
	
	for(auto &el:mp){
		if(minm>mp.second){
			minm=mp.second;
			minc=mp.first;
		}else if(maxm<mp.second){
			maxm=mp.second;
			maxc=mp.first;
		}
	}
	
	if(minm==maxm){
		for(int i=0;i<minm+1;i++){
			cout<<"a";
		}
		cout<<endl;
	}else{
		for(int i=0;i<
	
	return 0;
}