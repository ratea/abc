#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int ans=min(a+b,min(b+c,a+c));
	cout<<ans<<endl;
	return 0;
}