#include<iostream>
using namespace std;

int main(){
	int n,m,l;
	int p,q,r;
	cin>>n>>m>>l;
	cin>>p>>q>>r;
	
	int np=n/p;
	int mq=m/q;
	int lr=l/r;
	
	int ans=np*mq*lr;
	
	np=n/q;
	mq=m/r;
	lr=l/p;
	ans=max(ans,np*mq*lr);
	
	
	np=n/r;
	mq=m/p;
	lr=l/q;
	ans=max(ans,np*mq*lr);
	
	np=n/p;
	mq=m/r;
	lr=l/q;
	ans=max(ans,np*mq*lr);
	
	np=n/r;
	mq=m/q;
	lr=l/p;
	ans=max(ans,np*mq*lr);
	
	np=n/q;
	mq=m/p;
	lr=l/r;
	ans=max(ans,np*mq*lr);
	
	cout<<ans<<endl;
	return 0;
}