#include<iostream>
using namespace std;

int main(){
	int ans=0;
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		int a,b;
		cin>>a>>b;
		ans+=a*b;
	}
	
	ans=ans*1.05;
	
	cout<<ans<<endl;
	return 0;
}