#include<iostream>
using namespace std;

int main(){
	int a[6]={1,2,3,4,5,6};
	int b;
	cin >> b;
	b%=30;
	
	for(int i =0;i<b;i++){
		int tmp;
		tmp = a[i%5];
		a[i%5]=a[i%5+1];
		a[i%5+1]=tmp;
	}
	
	for(int i = 0;i<6;i++){
		cout << a[i];
	}
	cout << endl;
	
	return 0;
}