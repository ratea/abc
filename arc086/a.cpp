#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n,0);
	for(int i=0;i<n;i++){
		int b;
		cin>>b;
		a[b]++;
	}
	
	sort(a.begin(),a.end());
	
	int ans=0;
	int np=0;
	
	for(int i=0;i<k;i++){
		np+=a[n-1-i];
	}
	
	ans=n-np;
	if(ans<0)ans=0;
	
	cout<<ans<<endl;
	
	
	return 0;
}