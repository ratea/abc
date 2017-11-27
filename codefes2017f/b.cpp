#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	map<char,int> mp;
	int sm=0;
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
		sm=max(sm,mp[s[i]]);
	}
	
	if(sm<=s.size()/2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}