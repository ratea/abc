#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	int ans=-1e9;
	
	for(int i=0;i<n;i++){
		int tmp2=-1e9;
		int ans2=-1e9;
		for(int j=0;j<n;j++){
			int tmp=0;
			int tm=0;
			if(i!=j){
				for(int k=min(i,j);k<=max(i,j);k++){
					if((k-min(i,j))%2==0){
						tm+=a[k];
					}else{
						tmp+=a[k];
					}
				}
				if(tmp>tmp2){
					tmp2=tmp;
					ans2=tm;
				}
			}
			//cout<<i<<" "<<j<<" "<<tm<<" "<<tmp<<endl;
		}
		ans=max(ans,ans2);
		//cout<<ans<<endl;
	}
	
	cout<<ans<<endl;
	return 0;
}