#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int ans=a[n-1];
	int np=1;
	for(int i=1;i<n;i++){
		np*=2;
		ans+=a[n-i-1]*np;
	}
	cout<<ans<<endl;
}