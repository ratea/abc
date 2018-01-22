#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int nx=0;
	int ny=0;
	int nt=0;
	
	int t,x,y;
	
	for(int i=0;i<n;i++){
		cin>>t>>x>>y;
		if(t<x+y||abs(nx-x)+abs(ny-y)<nt-t){
			cout<<"No"<<endl;
			return 0;
		}
		
		if((abs(nx-x)+abs(ny-y))%2!=abs(nt-t)%2){
			cout<<"No"<<endl;
			return 0;
		}
		
		nt=t;
		nx=x;
		ny=y;
	}
	
	cout<<"Yes"<<endl;
	
	
}