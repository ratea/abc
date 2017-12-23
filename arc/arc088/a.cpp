#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int x,y;
	cin>>x>>y;
	long long int ans=0;
	while(x<=y){
		x*=2;
		ans++;
	}
	
	cout<<ans<<endl;
	
}