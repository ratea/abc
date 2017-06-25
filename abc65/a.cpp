#include<iostream>
using namespace std;

int main(){
	int x,a,b;
	cin>>x>>a>>b;
	if(a>=b){
		cout<<"delicious"<<endl;
	}else if(b-a<x+1){
		cout<<"safe"<<endl;
	}else{
		cout<<"dangerous"<<endl;
	}
	return 0;
}