#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	int ans=0;
	
	for(int i=0;i<n;i++){
		if(a[i]==i+1){
			ans++;
			i++;
		}
	}
	
	cout<<ans<<endl;
	return 0;
}