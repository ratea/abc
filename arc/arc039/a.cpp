#include<iostream>
#include<vector>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int ca=a/100;
	ca=(9-ca)*100;
	int cb=b/100;
	cb=(cb-1)*100;
	if(ca==0&&cb==0){
		int ca=(a-900)/10;
		ca=(9-ca)*10;
		int cb=(b-100)/10;
		cb=(cb-1)*10;
	}
	
	if(ca==0&&cb==0){
		int ca=(a-990)/1;
		ca=(9-ca)*1;
		int cb=(b-110)/1;
		cb=(cb-1)*1;
	}
	
	int ans=max(a+ca-b,a-b-cb);
	cout<<ans<<endl;
	return 0;
}