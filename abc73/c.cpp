#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	map<long long int,long long int> mp;
	
	int ans=0;
	
	for(int i=0;i<n;i++){
		long long int a;
		cin>>a;
		if(mp[a]==0){
			mp[a]++;
			ans++;
		}else{
			mp[a]=0;
			ans--;
		}
	}
	
	cout<<ans<<endl;
	return 0;
}