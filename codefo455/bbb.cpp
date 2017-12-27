#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[101];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=100;++i){
		a[i]=i*(i+1)/2-a[i-1];
	}cout<<a[n];
}