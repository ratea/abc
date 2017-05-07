#include<iostream>
using namespace std;

#include <algorithm>
#include <functional>
#include <iomanip>

int main(){
	int a,b;
	cin >> a >> b;
	int c[a];
	double d = 0;
	for(int i = 0;i<a;i++){
		cin >> c[i];
	}
	
	sort(c, c + a, greater<int>());
	
	for(int i = b-1;i>-1;i--){
		d = (d+c[i])/2;
	}
	
	cout <<fixed << setprecision(6)<< d <<endl;
	
	return 0;
}