#include "bits/stdc++.h"
using namespace std;

int main(){
	int x,a,b;
	cin>>x>>a>>b;
	int ax=abs(a-x);
	int bx=abs(b-x);
	if(ax>bx){
		cout<<"B"<<endl;
	}else if(ax<bx){
		cout<<"A"<<endl;
	}
	return 0;
}