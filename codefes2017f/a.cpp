#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	string ans="AKIHABARA";
	
	int flag=1;
	if(s.size()<5||s.size()>9)flag=0;
	int j=0;
	
	for(int i=0;i<s.size();i++){
		if(s[i]==ans[j]){
			j++;
		}else if(ans[j]=='A'){
			j++;
			if(s[i]==ans[j]){
				j++;
			}else{
				//cout<<i<<" "<<j<<endl;
				flag=0;
			}
		}else{
			//cout<<i<<" "<<j<<endl;
			flag=0;
		}
	}
	if(j<ans.size()-1)flag=0;
	
	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}