#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int ans=0;
	for(int i=0;i<n;i++){
		int b;
		cin>>b;
		ans+=min(b,k-b);
	}
	cout<<ans*2<<endl;
	return 0;
}