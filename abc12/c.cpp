#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int b = 2025-n;
	
	for(int i = 1;i<10;i++){
		if(b%i==0&&b/i<10)cout<<i<<" x "<<b/i<<endl;
	}
	
	return 0;
}