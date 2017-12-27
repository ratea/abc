#include "bits/stdc++.h"
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	string ans="zzzzzzzzzzzzzzzzzzzz";
	
	string tmp;
	for(int i=0;i<a.size();i++){
		tmp.push_back(a[i]);
		string tmp2;
		for(int j=0;j<b.size();j++){
			tmp2.push_back(b[j]);
			ans=min(ans,tmp+tmp2);
		}
	}
	cout<<ans<<endl;
}