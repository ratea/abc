#include<iostream>
using namespace std;
 
int main(){
	long long int a,b,k,l;
	cin>>a>>b>>k>>l;
	long long int ma=k/l;
	long long int ans=min(a*k,min(ma*b+(k%l)*a,(k+l-1)/l*b));
	cout<<ans<<endl;
	return 0;
}