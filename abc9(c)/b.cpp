#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;


int main(){
	int n;
	cin >> n;
	int a[n];
	
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	
	sort(a,a + n,greater<int>());
	
	for(int i = 1;i<n;i++){
		if(a[i]!=a[0]){
			cout << a[i] << endl;
			break;
		}
	}
	
	return 0;
}