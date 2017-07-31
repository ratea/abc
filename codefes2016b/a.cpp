#include"bits/stdc++.h"
using namespace std;

int main(){
	string s="CODEFESTIVAL2016";
	string s2;
	cin>>s2;
	
	int ans=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=s2[i])ans++;
	}
	
	cout<<ans<<endl;
	return 0;
}