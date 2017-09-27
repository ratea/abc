#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,p;
	cin>>n>>p;
	int a;
	int g=0;
	int k=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2==0){
			g++;
		}else{
			k++;
		}
	}
	
	if((k==0)&&p==0){
		long long int ans=1;
		for(int i=0;i<n;i++)ans*=2;
		cout<<ans<<endl;
		return 0;
	}
	if((k==0)&&p==1){
		cout<<0<<endl;
		return 0;
	}
	
	long long int ans=1;
	for(int i=0;i<n-1;i++)ans*=2;
	cout<<ans<<endl;
	return 0;
}