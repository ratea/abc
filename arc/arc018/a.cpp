#include<iostream>
using namespace std;
#include<cmath>
#include <iomanip>

int main(){
	double h,b;
	cin>>h>>b;
	cout<< fixed << setprecision(3)<<h*h*b/10000<<endl;
	return 0;
}