#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,y;
	cin>>n>>y;
	
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n-i+1;j++){
			int k=n-i-j;
			if(i*10000+j*5000+k*1000==y){
				cout<<i<<" "<<j<<" "<<k<<endl;
				return 0;
			}
		}
	}
	
	cout<<-1<<" "<<-1<<" "<<-1<<endl;
}