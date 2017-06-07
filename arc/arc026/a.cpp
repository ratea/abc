#include<iostream>
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	if(n<6){
		cout<<n*b<<endl;
		return 0;
	}
	
	cout<<5*b+(n-5)*a<<endl;
	return 0;
}