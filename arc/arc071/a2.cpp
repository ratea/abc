#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	map<char,int> mp;
	map<char,int> mpt;
	for(int i=0;i<26;i++){
		mp['a'+i]=50;
		mpt['a'+i]=0;
	}
	
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<s.size();j++){
			mpt[s[j]]++;
		}
		for(int j=0;j<26;j++){
			char at='a'+j;
			//cout<<at<<" "<<mp[at]<<" "<<mpt[at]<<endl;
			mp['a'+j]=min(mp['a'+j],mpt['a'+j]);
			mpt['a'+j]=0;
		}
	}
	
	for(int i=0;i<26;i++){
		char at='a'+i;
		//cout<<at<<mp[at]<<endl;
		for(int j=0;j<mp[at];j++){
			cout<<at;
		}
	}
	cout<<endl;
	return 0;
}