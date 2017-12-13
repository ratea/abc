#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,m;
	cin>>n>>m;
	long long int a=1900*m+100*(n-m);
	long long int ms=1;
	for(int i=0;i<m;i++)ms*=2;
	cout<<a*ms<<endl;
}