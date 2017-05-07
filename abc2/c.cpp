#include<iostream>
using namespace std;

#include<cmath>
#include<iomanip>

int main(){
	double x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	double a = 0.5*abs(((x2-x1)*(y3-y1))-((y2-y1)*(x3-x1)));
	
	cout << fixed << setprecision(1) << a << endl;
	
	return 0;
}