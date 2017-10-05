#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int ans=0;
	
	int i;
	
	for(i=1;i<=n;i++){
		ans+=i;
		if(ans>=n)break;
	}
	
	for(int j=1;j<=i;j++){
		if(j!=(ans-n))cout<<j<<endl;
	}
	
	return 0;
}