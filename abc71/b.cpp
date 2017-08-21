#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	map<char,int> mp;
	for(int i=0;i<26;i++){
		mp['a'+i]=0;
	}
	
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
	}
	
	for(int i=0;i<26;i++){
		if(mp['a'+i]==0){
			char a='a'+i;
			cout<<a<<endl;
			return 0;
		}
	}
	cout<<"None"<<endl;
	return 0;
}