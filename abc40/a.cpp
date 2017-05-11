#include<iostream>
using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	int ans = min(n-x,n-(n-x)-1);
	cout<<ans<<endl;
	return 0;
}