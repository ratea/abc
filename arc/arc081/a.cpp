#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<long long int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
	long long int b=0;
	long long int c=0;
	int i;
	for(i=n-1;i>0;i--){
		if(a[i]==a[i-1]){
			b=a[i];
			i-=2;
			break;
		}
	}
	for(;i>0;i--){
		if(a[i]==a[i-1]){
			c=a[i];
			break;
		}
	}
	
	cout<<b*c<<endl;
	
	return 0;
}