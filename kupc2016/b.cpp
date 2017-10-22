#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,k;
	cin>>n>>k;
	map<char,long long int> mp;
	
	for(long long int i=0;i<n;i++){
		string s;
		cin>>s;
		mp[s[0]]++;
	}
	
	long long int ans=0;
	vector<long long int> a(26);
	
	for(int i=0;i<26;i++){
		a[i]=mp['A'+i];
	}
	
	
	
	while(1){
		long long int p=0;
		sort(a.begin(),a.end(),greater<long long int>());
		for(long long int i=0;i<26;i++){
			if(p<k&&a[i]!=0){
				a[i]--;
				p++;
			}
		}
		if(p==k){
			ans++;
		}else{
			break;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}
	