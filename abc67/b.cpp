#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
	
	int ans=0;
	for(int i=0;i<k;i++){
		ans+=a[n-i-1];
	}
	cout<<ans<<endl;
	return 0;
}