#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(52);
	
	a[1]=1;
	a[0]=0;
	
	for(int i=2;i<51;i++){
		a[i]=a[i-1]+a[i-2];
	}
	
	cout<<a[n+1]<<endl;
	return 0;
}