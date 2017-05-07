#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int a[6];
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	a[3] = 1;
	a[4] = 1;
 
	if(n<4){
		cout << a[n] << endl;
	}else{
		for(int i = 4;i<n;i++){
			a[5] = (a[4]+a[3]+a[2])%10007;
			a[2] = a[3];
			a[3] = a[4];
			a[4] = a[5];
		}
		cout << a[5] << endl;
	}
 
	return 0;
}