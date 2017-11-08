#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int t,c,n;
	cin>>t>>c>>n;
	
	vector<long long int> ans(t,0);
	
	for(long long int i=0;i<n;i++){
		long long int x,y,s;
		cin>>x>>y>>s;
		for(long long int i=0;i<t;i++){
			if(s*(x+i*c)==y*c){
				ans[i]++;
				break;
			}
		}
	}
	
	for(long long int i=0;i<t;i++)cout<<ans[i]<<endl;
	
	return 0;
}