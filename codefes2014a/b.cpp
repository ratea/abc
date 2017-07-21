#include "bits/stdc++.h"
using namespace std;

int main(){
	string a;
	long long int b;
	cin>>a>>b;
	b%=a.size();
	b-=1;
	if(b<0)b=a.size()-1;
	cout<<a[b]<<endl;
	return 0;
}