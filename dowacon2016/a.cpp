#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	
	int ans=a+b-n;
	if(ans<0)ans=0;
	cout<<ans<<endl;
	return 0;
}