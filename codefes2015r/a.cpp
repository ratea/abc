#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<10;i++){
		if(i%2==0){
			ans+=i*20+n;
		}else{
			ans+=i*20-n+1+20;
		}
	}
	cout<<ans<<endl;
	return 0;
}