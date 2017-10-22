#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	int ans=0;
	
	int l=0;
	int r=s.size()-1;
	
	while(l<=r){
		if(s[l]=='x'&&s[r]!='x'){
			ans++;
			l++;
		}else if(s[l]!='x'&&s[r]=='x'){
			ans++;
			r--;
		}else if(s[l]==s[r]){
			l++;
			r--;
		}else{
			cout<<-1<<endl;
			return 0;
		}
	}
	
	cout<<ans<<endl;
	
	
	return 0;
}