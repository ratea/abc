#include "bits/stdc++.h"
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	
	if(x==0){
		if(y>=0){
			cout<<y<<endl;
		}else{
			cout<<abs(y)+1;
		}
		return 0;
	}
	
	if(y==0){
		if(x<=0){
			cout<<abs(x)<<endl;
		}else{
			cout<<x+1<<endl;
		}
		return 0;
	}
	
	if(x>=0&&y>=0){
		if(x<=y){
			cout<<y-x<<endl;
		}else{
			cout<<x-y+2<<endl;
		}
	}else if(x<0&&y<0){
		if(x<=y){
			cout<<y-x<<endl;
		}else{
			cout<<x-y+2<<endl;
		}
	}else if(x>=0&&y<0){
		cout<<abs((-1)*x-y)+1<<endl;
	}else if(x<0&&y>=0){
		cout<<abs((-1)*x-y)+1<<endl;
	}
	return 0;
}