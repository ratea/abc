#include<iostream>
using namespace std;

int main(){
	int m,n,N;
	cin>>m>>n>>N;
	
	int ans=N;
	while(N/m>0){
		ans+=(N/m)*n;
		N=(N%m)+((N/m)*n);
	}
	cout<<ans<<endl;
	return 0;
}