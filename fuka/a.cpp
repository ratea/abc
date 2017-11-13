#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,k;
	while(1){
		cin>>n>>k;
		if(n==0&&k==0)break;
		vector<int> x(n);
		for(int i=0;i<n;i++)cin>>x[i];
		sort(x.begin(),x.end());
		int ans=0;
		for(int i=0;i<k;i++)ans+=x[i];
		cout<<ans<<endl;
	}
	return 0;
}