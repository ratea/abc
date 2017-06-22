#include<iostream>
using namespace std;

int main(){
	long long int a,k;
	cin>>a>>k;
	int ans=0;
	
	if(k==0){
		cout<<2000000000000-a<<endl;
		return 0;
	}
	
	while(1){
		a+=a*k+1;
		ans++;
		if(a>=2000000000000)break;
	}
	cout<<ans<<endl;
	return 0;
}