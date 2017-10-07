#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,c;
	cin>>n>>c;
	vector<int> l(n);
	for(int i=0;i<n;i++){
		cin>>l[i];
	}
	sort(l.begin(),l.end());
	
	long long int ans=0;
	long long int u=0;
	long long int d=n-1;
	while(u<=d){
		if(l[u]+l[d]<c){
			u++;
			d--;
			ans++;
		}else{
			d--;
			ans++;
		}
	}
	
	cout<<ans<<endl;
	
	
	return 0;
}