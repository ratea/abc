#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int tm=0;
	int bm=1000000001;
	
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		bm=min(bm,b);
		tm=max(tm,a);
	}
	
	cout<<tm+bm<<endl;
	return 0;
}