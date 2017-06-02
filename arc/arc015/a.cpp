#include<iostream>
using namespace std;
#include <iomanip>

int main(){
	double n;
	cin>>n;
	cout<< fixed<< setprecision(12)<<(9*n/5)+32<<endl;
	return 0;
}