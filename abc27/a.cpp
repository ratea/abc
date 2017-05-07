#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b){
		cout<<c<<endl;
		return 0;
	}else if(a==c){
		cout<<b<<endl;
		return 0;
	}else if(c==b){
		cout<<a<<endl;
	}
	
	return 0;
}