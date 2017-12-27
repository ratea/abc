#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> imos(n+2,0);
	
	for(int i=1;i<n+1;i++){
		for(int j=0;j<n+1-i;j++){
			imos[j]++;
			imos[j+i]--;
		}
	}
	
	int tmp=0;
	int ans=0;
	for(int i=0;i<n+1;i++){
		tmp+=imos[i];
		//cout<<tmp<<endl;
		ans=max(tmp,ans);
	}
	
	cout<<ans<<endl;
	
	
	
}