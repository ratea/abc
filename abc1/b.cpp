#include<iostream>
using namespace std;

int main()
{
	double a;
	cin >> a;
	
	a /= 1000;
	
	if(a < 0.1){
		cout << "00" << endl;
	}else if(a <= 5){
		if(a*10<10){
			cout << "0" << a*10 << endl;
		}else{
			cout << a*10 <<endl;
		}
	}else if(a <= 30){
		cout << a+50 << endl;
	}else if(a <= 70){
		a-=30;
		a /=5;
		a+=80;
		cout << a <<endl;
	}else{
		cout << 89 << endl;
	}
	
	
	return 0;
}
