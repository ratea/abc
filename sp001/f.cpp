#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	int ans=1;
	int np=0;
	for(int i=1;i<n;i++){
		if(a[np]<a[i]){
			ans++;
			np=i;
		}
	}
	
	cout<<ans<<endl;
	
	
	return 0;
}