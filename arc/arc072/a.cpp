#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	long long int ans=0;
	long long int np;
	long long int np2;
	cin>>np;
	long long int ans2;
	if(np==0){
		np=-1;
		ans=1;
	}
	
	if(np>0){
		np2=-1;
		ans2=abs(np+1);
	}else{
		np2=1;
		ans2=abs(np-1);
	}
	
	for(long long int i=1;i<n;i++){
		long long int a;
		cin>>a;
		if(np>0){
			if(np+a>=0){
				ans+=abs((np+a)+1);
				np=-1;
			}else{
				np+=a;
			}
		}else if(np<0){
			if(np+a<=0){
				ans+=abs((np+a)-1);
				np=1;
			}else{
				np+=a;
			}
		}
		
		//cout<<np<<" "<<a<<" "<<ans<<endl;
		
		if(np2>0){
			if(np2+a>=0){
				ans2+=abs((np2+a)+1);
				np2=-1;
			}else{
				np2+=a;
			}
		}else if(np2<0){
			if(np2+a<=0){
				ans2+=abs((np2+a)-1);
				np2=1;
			}else{
				np2+=a;
			}
		}
	}
	
	//cout<<ans<<" "<<ans2<<endl;
	
	ans=min(ans,ans2);
	
	cout<<ans<<endl;
	return 0;
}