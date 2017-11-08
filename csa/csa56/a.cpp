#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> l(n);
	vector<int> r(n);
	for(int i=0;i<n;i++){
		cin>>l[i]>>r[i];
	}
	
	int ans=0;
	vector<int> in(n,0);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j&&l[i]<l[j]&&r[i]>r[j]){
				in[j]=1;
			}
		}
	}
	
	for(int i=0;i<n;i++)ans+=in[i];
	
	cout<<ans<<endl;
	
	return 0;
}