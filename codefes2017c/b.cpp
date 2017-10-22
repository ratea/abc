#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int g=0;
	
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0)g++;
	}
	
	int ma=1;
	for(int i=0;i<g;i++)ma*=2;
	
	int ans=1;
	for(int i=0;i<n;i++)ans*=3;
	
	cout<<ans-ma<<endl;
	
	return 0;
}