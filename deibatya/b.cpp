#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	string ans(s.size(),2);
	int p=0;
	
	for(int i=0;i<s.size();i++){
		if(s[i]=='B'){
			p--;
			if(p<0)p=0;
		}else{
			ans[p]=s[i];
			p++;
		}
	}
	
	for(int i=0;i<p;i++){
		cout<<ans[i];
	}
	cout<<endl;
	
	return 0;
}