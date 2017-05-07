#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a = n/2;
	if(n%2==1)a++;
	cout << a << endl;
	
	for(int i = n;i>1;i-=2){
		cout << 2 << endl;
	}
	if(n%2==1)cout << 1 << endl;
	
	return 0;
}