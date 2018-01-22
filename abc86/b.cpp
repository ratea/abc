#include "bits/stdc++.h"
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int s=1;
	int bb=b;
	while(bb>0){
		bb/=10;
		s*=10;
	}
	int ans=a*s+b;
	
	for(int i=1;i<1000;i++){
		if(i*i==ans){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
}