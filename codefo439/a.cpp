#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	
	int ans=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int x=a[i]^b[j];
			for(int k=0;k<n;k++){
				if(x==a[k]||x==b[k]){
					ans++;
					//cout<<i<<" "<<j<<" "<<x<<endl;
					break;
				}
			}
		}
	}
	
	//cout<<ans<<endl;
	
	if(ans%2==0){
		cout<<"Karen"<<endl;
	}else{
		cout<<"Koyomi"<<endl;
	}
	
	return 0;
}