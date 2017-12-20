#include "bits/stdc++.h"
using namespace std;

int main(){
	double a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	
	vector<double> x;
	vector<double> y;
	
	for(int i=0;i<31;i++){
		for(int j=0;j<31;j++){
			x.push_back((i*a+j*b)*100);
		}
	}
	
	for(int i=0;i*c<=1500;i++){
		for(int j=0;i*c+j*d<=1500;j++){
			y.push_back(i*c+j*d);
		}
	}
	
	double ans=0;
	double ans1=a*100;
	double ans2=0;
	
	for(int i=0;i<x.size();i++){
		for(int j=0;j<y.size();j++){
			//cout<<x[i]<<" "<<y[j]<<endl;
			if(x[i]+y[j]<=f&&100*y[j]/(x[i]+y[j])<=100*e/(100+e)){
				if(100*y[j]/(x[i]+y[j])>ans){
					ans=100*y[j]/(x[i]+y[j]);
					ans1=x[i];
					ans2=y[j];
				}
			}
		}
	}
	
	cout<<ans1+ans2<<" "<<ans2<<endl;
}