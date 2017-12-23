#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,x;
	cin>>n>>x;
	vector<long long int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	long long int ans=1e18;
	vector<long long int> ma(n,1e9);
	
	for(int i=0;i<n;i++){
		long long int tmp=x*i;
		for(int j=0;j<n;j++){
			ma[j]=min(ma[j],a[(j+i)%n]);
			tmp+=ma[j];
		}
		ans=min(ans,tmp);
	}
	cout<<ans<<endl;
}