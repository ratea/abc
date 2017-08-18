#include "bits/stdc++.h"
using namespace std;

int main(){
	double n;
	cin>>n;
	double a=sqrt(n);
	int b=a;
	if(a==b){
		cout<<0<<endl;
		return 0;
	}
	
	b=(b+1)*(b+1);
	cout<<b-n<<endl;
	return 0;
}