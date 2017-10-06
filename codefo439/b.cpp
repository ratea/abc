#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int a,b,ans=1;
	cin>>a>>b;
	for(long long int i=b;i>a;i--){
		long long int x=i%10;
		ans*=x;
		ans%=10;
		if(ans==0){
			cout<<0<<endl;
			return 0;
		}
		//cout<<ans<<endl;
	}
	
	cout<<ans<<endl;
	
	return 0;
}