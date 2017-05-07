#include<iostream>
using namespace std;

int main(){
	string a;
	cin>>a;
	
	if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]){
		cout<<"SAME"<<endl;
	}else{
		cout<<"DIFFERENT"<<endl;
	}
	return 0;
}