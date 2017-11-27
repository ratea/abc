#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a=0;
	
	string c;
	int flag=1;
	for(int i=0;i<n;i++){
		cin>>c;
		if(c[0]=='A'){
			a++;
		}else{
			a--;
		}
		
		if(a<0){
			flag=0;
		}
	}
	
	if(a!=0)flag=0;
	
	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}