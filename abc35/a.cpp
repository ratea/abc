#include<iostream>
using namespace std;

int main(){
	double w,h;
	cin>>w>>h;
	
	if(h/w==0.75){
		cout<<"4:3"<<endl;
	}else{
		cout<<"16:9"<<endl;
	}
	
	return 0;
}