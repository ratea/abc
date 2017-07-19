#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=1;
	
	if(n==1){
		cout<<"Not Prime"<<endl;
		return 0;
	}
	if(n==2||n==3){
		cout<<"Prime"<<endl;
		return 0;
	}
	
	if(n%2==0)ans=0;
	
	for(int i=3;i<n/2+1;i+=2){
		if(n%i==0)ans=0;
	}
	
	if(ans==1){
		cout<<"Prime"<<endl;
		return 0;
	}
	
	if(n%2!=0&&n%5!=0&&n%3!=0){
		cout<<"Prime"<<endl;
		return 0;
	}else{
		cout<<"Not Prime"<<endl;
		return 0;
	}
	
	cout<<"Prime"<<endl;
	return 0;
}