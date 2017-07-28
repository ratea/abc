#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	vector<string> a(n);
	long long int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
        int ss=1;
        for(int j=0;j<a[i].size();j++)ss*=10;
		ans*=ss;
        ans%=1000000007;
		ans+=stoi(a[i]);
        ans%=1000000007;
	}
    ans%=1000000007;
	cout<<ans<<endl;
	
	return 0;
}