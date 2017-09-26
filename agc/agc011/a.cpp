#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,c,k;
	cin>>n>>c>>k;
	
	vector<int> t(n);
	for(int i=0;i<n;i++)cin>>t[i];
	long long int ans=0;
	long long int np=-1;
	long long int sum=0;
	
	sort(t.begin(),t.end());
	
	for(int i=0;i<n;i++){
		if(t[i]>=np){
			ans++;
			np=t[i]+k;
			sum=1;
		}else if(sum>c){
			ans++;
			sum=1;
		}else{
			sum++;
		}
	}
	
	cout<<ans<<endl;
	return 0;
}