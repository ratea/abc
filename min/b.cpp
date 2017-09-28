#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	sort(a.begin(),a.end());
	
	long long int ans=0;
	for(int i=0;i<k;i++){
		ans+=a[i]+i;
	}
	
	cout<<ans<<endl;
	return 0;
}