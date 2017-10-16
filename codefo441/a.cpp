#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	
	long long int ans=min(a,b);
	
	cout<<ans+(n-2)*min(a,min(b,c))<<endl;
	
	return 0;
}