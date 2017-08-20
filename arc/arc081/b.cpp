#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	
	int i=1;
	
	long long int ans=1;
	long long int mod=1e9+7;
	
	int flag;
	if(s1[0]==s2[0]){
		flag=0;
	}else{
		flag=1;
		i=2;
		if(n!=1)ans=2;
	}
	
	for(;i<n;i++){
		if(flag==0){
			if(s1[i]==s2[i]){
				ans*=2;
				ans%=mod;
			}else{
				ans*=2;
				ans%=mod;
				flag=1;
				i++;
			}
		}else{
			if(s1[i]==s2[i]){
				flag=0;
			}else{
				ans*=3;
				ans%=mod;
				i++;
			}
		}
	}
	
	ans*=3;
	ans%=mod;
	cout<<ans<<endl;
	
	return 0;
}