#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	long long int kai=0;
	long long int n=s.size();
	
	map<char,int> mp;
	for(int i=0;i<26;i++){
		mp['a'+i]=0;
	}
	
	for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	
	for(int i=0;i<26;i++){
		if(mp['a'+i]>1){
			long long int kait=0;
			for(int j=1;j<mp['a'+i]+1;j++)kait+=(j-1);
			kai+=kait;
		}
	}
	
	//cout<<kai<<endl;
	cout<<s.size()*(s.size()-1)/2+1-kai<<endl;
	
	return 0;
}