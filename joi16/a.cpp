#include "bits/stdc++.h"
using namespace std;

int main(){
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	
	if(a>0){
		cout<<(b-a)*e<<endl;
	}else{
		cout<<(0-a)*c+d+b*e<<endl;
	}
	return 0;
}