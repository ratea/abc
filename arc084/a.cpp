#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);
	
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long int i=0;i<n;i++){
		cin>>b[i];
	}
	for(long long int i=0;i<n;i++){
		cin>>c[i];
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	
	long long int ans=0;
	
	long long int up=0;
	
	long long int j=0;
	long long int k=0;
	
	for(long long int i=0;i<n;i++){
		while(a[j]<b[i]&&j<n){
			j++;
		}
		while(b[i]>=c[k]&&k<n){
			k++;
		}
		//cout<<j<<" "<<(n-k)<<endl;
		ans+=j*(n-k);
	}
	
	cout<<ans<<endl;
	
	return 0;
}