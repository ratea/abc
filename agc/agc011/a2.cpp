#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,c,k;
	cin>>n>>c>>k;
	vector<int> t(n);
	for(int i=0;i<n;i++)cin>>t[i];
	sort(t.begin(),t.end());
	
	long long int np=t[0]+k;
	long long int ans=1;
	long long int count=1;
	
	for(int i=1;i<n;i++){
		if(count<c&&t[i]<=np){
			count++;
		}else{
			ans++;
			count=1;
			np=t[i]+k;
		}
	}
	cout<<ans<<endl;
	return 0;
}