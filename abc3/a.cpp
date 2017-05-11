#include<iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	double sum=0;
	
	for(int i = 1;i<a+1;i++){
		sum+=i;
	}
	
	sum/=a;
	sum*=10000;
	
	cout << sum << endl;
	
	return 0;
}