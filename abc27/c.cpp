#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	
	long long int depth=0;
	for(long long int i=n;i>0;i/=2)depth++;
	
	long long int np=1;
	int play=0;
	while(np<=n){
		np*=2;
		if(depth%2==1)np++;
		play++;
		if(np>n)break;
		np*=2;
		if(depth%2==0)np++;
		play++;
	}
	//cout<<play<<endl;
	if(play%2==0){
		cout<<"Takahashi"<<endl;
	}else{
		cout<<"Aoki"<<endl;
	}
	return 0;
}