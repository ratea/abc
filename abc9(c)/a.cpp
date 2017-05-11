#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n%2==1){
		n=(n/2)+1;
	}else{
		n=n/2;
	}
	
	cout << n << endl;
	
	return 0;
}