#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,h;
	cin>>n>>h;
	vector<int> b(n+1);
	b[n]=0;
	int ma=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a>>b[i];
		ma=max(ma,a);
	}
	
	sort(b.begin(),b.end(),greater<int>());
	
	
	int kai=0;
	while(h>0){
		if(ma<b[kai]){
			h-=b[kai];
			kai++;
		}else{
			break;
		}
	}
	if(h>0){
		kai+=h/ma;
		if(h%ma!=0)kai++;
	}
	cout<<kai<<endl;
}