#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	if(n==2){
		cout<<"Borys"<<endl;
		return 0;
	}
	if(abs(a-b)%2==0){
		cout<<"Alice"<<endl;
	}else{
		cout<<"Borys"<<endl;
	}
	
}