#include<iostream>
using namespace std;

int main(){
	int w,h;
	cin>>w>>h;
	long long int mod=1000000007;
	
	w--;
	h--;
	
	int ac = w+h;
	int bc = w;
	
	long long int ansa=1;
	
	for(int i = ac;i>ac-bc;i--){
		ansa=ansa*i%mod;
	}
	//cout<<ansa<<endl;
	
	long long int ansb=1;
	
	for(int i = bc;i>0;i--){
		ansb=ansb*i%mod;
	}
	//cout<<ansb<<endl;
	
	cout<<ansa/ansb<<endl;
	return 0;
}