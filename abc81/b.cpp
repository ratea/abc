#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=1e9;;
	for(int i=0;i<n;i++){
		int tmp=0;
		int a;
		cin>>a;
		while(a%2==0){
			a/=2;
			tmp++;
		}
		ans=min(ans,tmp);
	}
	cout<<ans<<endl;
	return 0;
}