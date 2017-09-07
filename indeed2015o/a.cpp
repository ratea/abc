#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
	vector<int> b(n/2);
	for(int i=0;i<n;i+=2){
		b[i/2]=a[i]+a[n-1-i];
	}
	sort(b.begin(),b.end());
	cout<<abs(b[0]-b[n/2-1])<<endl;
	
	return 0;
}