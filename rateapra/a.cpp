#include "bits/stdc++.h"
using namespace std;

int main(){
	double x1,y1,r;
	cin>>x1>>y1>>r;
	double x2,y2,x3,y3;
	cin>>x2>>y2>>x3>>y3;
	
	if(x1+r<=x3&&x1-r>=x2&&y1+r<=y3&&y1-r>=y2){
		cout<<"NO"<<endl<<"YES"<<endl;
		return 0;
	}else if(hypot(x1-x2,y1-y2)<=r&&hypot(x1-x2,y1-y3)<=r&&hypot(x1-x3,y1-y2)<=r&&hypot(x1-x3,y1-y3)<=r){
		cout<<"YES"<<endl<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl<<"YES"<<endl;
	return 0;
}