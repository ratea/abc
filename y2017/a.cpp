#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	string t="yahoo";
	
	for(int i=0;i<s.size();i++){
		for(int j=0;j<s.size();j++){
			if(s[i]==t[j]){
				t[j]='1';
				break;
			}
		}
	}
	
	for(int i=0;i<s.size();i++){
		if(t[i]!='1'){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}