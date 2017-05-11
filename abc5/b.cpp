#include<iostream>
using namespace std;

#include <algorithm>

int main(){
	int a;
	cin >> a;
	int b[a];
	
	for(int i=0;i<a;i++){
		cin >> b[i];
	}
	
	sort(b,b+a);
	
	cout << b[0]<<endl;
	
	return 0;
}