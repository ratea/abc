#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=2;i<n;i++){
		if(a[i-2]+a[i-1]+a[i]<k){
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}