#include<iostream>
using namespace std;
#include <cmath>
#include <cstdio>
#include <iomanip>


int main(){
	double n,m;
	cin>>n>>m;
	
	n=n*30+((m/60)*30);
	m=m*6;
	
	double ans = n-m;
	if(ans<0)ans*=-1;
	if(ans>360)ans-=360;
	if(ans>180)ans=360-ans;
	
	cout <<ans<<endl;
	return 0;
}