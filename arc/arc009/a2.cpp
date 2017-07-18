#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	long long int ans=0;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		ans+=a*b;
	}
	ans*=1.05;
	cout<<ans<<endl;
	return 0;
}