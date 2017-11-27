#include "bits/stdc++.h"
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int ans=max(a+b,a*b);
	ans=max(ans+c,ans*c);
	cout<<ans<<endl;
	return 0;
}