#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1)cout<<i+1<<endl;
	}
	
	
	return 0;
}