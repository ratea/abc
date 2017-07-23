#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int i;
	long long int ans=0;
	for(i=0;i<n;i++){
		int a;
		cin>>a;
		ans+=a;
		if(ans>=k){
			cout<<i+1<<endl;
			return 0;
		}
	}
	return 0;
}