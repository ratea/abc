#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<double> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
	double ans=0;
	for(int i=0;i<n;i++){
		double y=0;
		for(int j=0;j<n;j++){
			int ra=a[j];
			int la=a[i];
			if(i!=j&&la%ra==0)y++;
		}
		//cout<<y<<endl;
		int yy=y;
		if(y==0){
			ans++;
		}else if(yy%2!=0){
			ans+=0.5;
		}else{
			ans+=((y/2)+1)/(y+1);
		}
		//cout<<ans<<endl;
	}
	cout<<fixed<<setprecision(8)<<ans<<endl;
	return 0;
}