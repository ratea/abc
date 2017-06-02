#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans = 0;
	for(int i = 0;i<n;i++){
		string s;
		cin>>s;
		if(s=="TAKAHASHIKUN"||s=="Takahashikun"||s=="takahashikun")ans++;
		if(s=="TAKAHASHIKUN."||s=="Takahashikun."||s=="takahashikun.")ans++;
	}
	cout<<ans<<endl;
	return 0;
}