#include<iostream>
using namespace std;

int main(){
	int a,b,c,k,s,t;
	cin >> a>>b>>c>>k>>s>>t;
	
	int sum = (a*s)+(b*t);
	if(s+t>=k)sum-=(s+t)*c;
	
	cout << sum << endl;
	
	return 0;
}