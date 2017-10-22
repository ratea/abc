#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	map<char,int> mp;
	
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
	}
	
	int k=0;
	
	for(int i=0;i<26;i++){
		if(mp['a'+i]%2==1)k++;
	}
	
	cout<<k<<endl;
	
	return 0;
}