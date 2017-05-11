#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int sum;
	int c=10;
	int d = b;
	while(d/10!=0){
		d/=10;
		c*=10;
	}
	sum=((a*c)+b)*2;
	cout << sum << endl;
	
	return 0;
}