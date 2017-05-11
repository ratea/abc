#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int ans = 3;
	if(a==b)ans--;
	if(c==b)ans--;
	if(a==c)ans--;
	if(ans==0)ans=1;
	
	cout<<ans<<endl;
	return 0;
}