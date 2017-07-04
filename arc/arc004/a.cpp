#include<iostream>
using namespace std;
#include<vector>
#include<cmath>

int main(){
	double n;
	cin>>n;
	vector<double> x(n);
	vector<double> y(x);
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	
	double ans=0;
	double ans2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			ans2=((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			ans=max(ans,sqrt(ans2));
		}
	}
	cout<<ans<<endl;
	return 0;
}