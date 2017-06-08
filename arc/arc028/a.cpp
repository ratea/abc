#include<iostream>
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	
	while(1){
		n-=a;
		if(n<1){
			cout<<"Ant"<<endl;
			return 0;
		}
		n-=b;
		if(n<1){
			cout<<"Bug"<<endl;
			return 0;
		}
	}
	return 0;
}