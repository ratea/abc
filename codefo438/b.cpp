#include "bits/stdc++.h"
using namespace std;

int main(){
	int h,m,s;
	cin>>h>>m>>s;
	
	int t1,t2;
	cin>>t1>>t2;
	
	h*=5;
	t1*=5;
	t1%=60;
	t2*=5;
	t2%=60;
	h%=60;
	
	//cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<endl;
	
	for(int i=0;i<61;i++){
		if((t1+i)%60==t2){
			cout<<"YES"<<endl;
			return 0;
		}
		if((t1+i)%60==h||(t1+i)%60==m||(t1+i)%60==s){
			break;
		}
	}
	
	for(int i=1;i<61;i++){
		int x=t1-i;
		if(x<0)x+=60;
		if(x==t2){
			cout<<"YES"<<endl;
			return 0;
		}
		if(x==h||x==m||x==s){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	
	cout<<"NO"<<endl;
	
	return 0;
}