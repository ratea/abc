#include<iostream>
using namespace std;

int main(){
	long long int a,b,x;
	cin>>a>>b>>x;
	
	long long int ans;
	int ax=(a-1)/x+1;
	if(a==0)ax=0;
	
	ans = b/x+1-ax;
	
	cout<<ans<<endl;
	return 0;
}