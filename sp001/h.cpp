#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	int mini=100001;
	
	int ans=0;
	int np=0;
	int sans=0;
	for(int i=0;i<n;i++){
		int nnp=i;
		sans=1;
		if(a[i]<mini){
			mini=a[i];
			//np=i;
			for(int j=i+1;j<n;j++){
				//cout<<a[nnp]<<" "<<a[j]<<endl;
				if(a[nnp]<a[j]){
					sans++;
					nnp=j;
				}
			}
		}
		ans=max(ans,sans);
	}
	
	cout<<ans<<endl;
	
	return 0;
}