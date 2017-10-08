#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	map<int,int> d;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		d[a]++;
	}
	
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int b;
		cin>>b;
		d[b]--;
		if(d[b]<0){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	
	cout<<"YES"<<endl;
	
	
	return 0;
}