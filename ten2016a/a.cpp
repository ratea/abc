#include "bits/stdc++.h"
using namespace std;

int main(){
	int n=100;
	int ans=0;
	for(int i=0;i<=n;i++){
		if(i%3!=0&&i%5!=0)ans+=i;
	}
	cout<<ans<<endl;
	return 0;
}