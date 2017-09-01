#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	if(n%2==0){
		cout<<"No"<<endl;
		return 0;
	}
	
	if(a[0]%2!=0&&a[n-1]%2!=0){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
	return 0;
}