#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	long long int tmp=0;
	long long int a;
	long long int ans=0;
	for(long long int i=0;i<n;i++){
		cin>>a;
		if(a!=0){
			tmp+=a;
		}else{
			ans+=tmp/2;
			tmp=0;
		}
	}
	ans+=tmp/2;
	
	cout<<ans<<endl;
}