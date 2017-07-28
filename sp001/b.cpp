#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		ans+=a[i];
	}
	
	cout<<ans<<endl;
	
	return 0;
}