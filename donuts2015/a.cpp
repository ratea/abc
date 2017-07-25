#include "bits/stdc++.h"
using namespace std;

int main(){
	double r,d;
	cin>>r>>d;
	double ans=(r*r*M_PI)*(2*d*M_PI);
	cout<<fixed<<setprecision(8)<<ans<<endl;
	return 0;
}