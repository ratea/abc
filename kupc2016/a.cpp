#include  "bits/stdc++.h"
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int ans=0;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		if(t<a||b<=t)ans++;
	}
	
	cout<<ans<<endl;
	return 0;
}