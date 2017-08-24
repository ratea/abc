#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	long long int np=a[0];
	long long int ans=0;
	
	if(np==0){
		np=1;
		ans=1;
	}
	
	for(int i=1;i<n;i++){
		if(np>0){
			if(np+a[i]>=0){
				ans+=abs((np+a[i])+1);
				np=-1;
			}else{
				np+=a[i];
			}
		}else if(np<0){
			if(np+a[i]<=0){
				ans+=abs((np+a[i])-1);
				np=1;
			}else{
				np+=a[i];
			}
		}
	}
	
	long long int ans2;
	if(a[0]<0){
		np=1;
		ans2=abs(a[0]-1);
	}else{
		np=-1;
		ans2=abs(a[0]+1);
	}
	
	
	for(int i=1;i<n;i++){
		if(np>0){
			if(np+a[i]>=0){
				ans2+=abs((np+a[i])+1);
				np=-1;
			}else{
				np+=a[i];
			}
		}else if(np<0){
			if(np+a[i]<=0){
				ans2+=abs((np+a[i])-1);
				np=1;
			}else{
				np+=a[i];
			}
		}
		//cout<<np<<" "<<a[i]<<" "<<ans2<<endl;
	}
	
	//cout<<ans<<" "<<ans2<<endl;
	
	ans=min(ans,ans2);
	cout<<ans<<endl;
	return 0;
}