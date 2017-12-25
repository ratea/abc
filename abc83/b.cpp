#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int ans=0;
	for(int i=0;i<=n;i++){
		int c=0;
		int t=i;
		for(int j=0;j<5;j++)c+=t%10,t/=10;
		if(a<=c&&c<=b)ans+=i;
	}
	cout<<ans<<endl;
}