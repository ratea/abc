#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	long long int np=1;
	long long int ans=0;
	for(int i = 0;i<n;i++){
		long long int a;
		cin>>a;
		ans+=a*np;
		if(n-i>k)np++;
		if(i>k-2)np--;
		//cout<<np<<endl;
	}
	cout<<ans<<endl;
	return 0;
}