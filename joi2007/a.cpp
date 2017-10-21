#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	
	long long int ans=0;
	long long int ans2=0;
	vector<long long int> a(n);
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		if(i<k){
			ans+=a[i];
		}else{
			ans2=max(ans2,ans);
			ans+=a[i];
			ans-=a[i-k];
			ans2=max(ans2,ans);
		}
	}
	
	
	cout<<ans2<<endl;
	return 0;
}