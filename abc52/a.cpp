#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ab,cd;
	ab=a*b;
	cd=c*d;
	cout<<max(ab,cd)<<endl;
	return 0;
}