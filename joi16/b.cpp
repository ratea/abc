#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	
	int ma=0;
	int ans=0;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		ans+=max(0,n-a);
		ma=max(ma,max(0,n-a));
	}
	
	cout<<ans-ma<<endl;
	return 0;
}