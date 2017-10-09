#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> c(n);
	for(int i=0;i<n;i++)cin>>c[i];
	
	vector<int> ve(1e5+1,-1);
	int ans=0;
	int tmp=0;
	
	for(int i=0;i<n;i++){
		if(ve[c[i]]==-1){
			ans++;
			ve[c[i]]=i;
		}else{
			ans=min(ans+1,i-ve[c[i]]);
			ve[c[i]]=i;
		}
		tmp=max(tmp,ans);
	}
	
	cout<<tmp<<endl;
	return 0;
}