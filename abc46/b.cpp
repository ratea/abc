#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	
	int ans = k;
	for(int i = 1;i<n;i++){
		ans*=k-1;
	}
	cout<<ans<<endl;
	return 0;
}