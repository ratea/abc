#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> p(n+1);
	int x;
	for(int i=1;i<n+1;i++){
		cin>>x;
		p[x]=i;
	}
	
	vector<int> a(n+2);
	vector<int> b(n+2);
	
	a[1]=1;
	b[1]=1e9;
	
	for(int i=1;i<n+1;i++){
		if(p[i]-p[i+1]<0){
			a[i+1]=a[i]+abs(p[i]-p[i+1])+1;
			b[i+1]=b[i]-1;
		}else{
			a[i+1]=a[i]+1;
			b[i+1]=b[i]-1-abs(p[i]-p[i+1]);
		}
	}
	
	for(int i=1;i<n+1;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<n+1;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
}