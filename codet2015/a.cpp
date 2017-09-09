#include "bits/stdc++.h"
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int ans=0;
	ans+=abs(a);
	ans+=abs(a-b);
	ans+=abs(b);
	
	cout<<ans<<endl;
	return 0;
}