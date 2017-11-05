#include "bits/stdc++.h"
using namespace std;
 
long long int fn(long long int x){
	long long int ans=0;
	string s=to_string(x);
	for(int i=0;i<s.size();i++){
		ans+=s[i]-'0';
	}
	return ans;
}
 
int main(){
	long long int n;
	cin>>n;
	
	long long int ans=1e9+7;
	
	for(int i=2;i<10000000;i++){
		//cout<<n*i<<" "<<fn(n*i)<<endl;
		ans=min(ans,fn(n*i));
	}
	
	cout<<ans<<endl;
	
	return 0;
}