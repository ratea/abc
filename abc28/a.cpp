#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<60){
		cout <<"Bad"<<endl;
	}else if(n<90){
		cout << "Good"<<endl;
	}else if(n==100){
		cout << "Perfect"<<endl;
	}else{
		cout << "Great"<<endl;
	}
	
	return 0;
}