#include<iostream>
using namespace std;

int main(){
	int w,h;
	cin>>w>>h;
	
	w--;
	h--;
	
	int ac = w+h;
	int bc = w;
	
	long long int ansa=1;
	
	for(int i = ac;i>ac-bc;i--){
		ansa*=i;
	}
	//cout<<ansa<<endl;
	
	long long int ansb=1;
	
	for(int i = bc;i>0;i--){
		ansb*=i;
	}
	//cout<<ansb<<endl;
	
	cout<<ansa/ansb<<endl;
	return 0;
}