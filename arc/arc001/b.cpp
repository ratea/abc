#include "bits/stdc++.h"
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	
	int ope=abs(a-b);
	int ans=ope/10;
	ope%=10;
	
	if(ope==8){
		ans+=3;
	}else if(ope==9){
		ans+=2;
	}else{
		if(ope==4){
			ans+=2;
		}else{
			ans+=ope/5;
			ans+=ope%5;
		}
	}
	
	cout<<ans<<endl;
	return 0;
}