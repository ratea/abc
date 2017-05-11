#include<iostream>
using namespace std;

int main(){
	string a;
	
	cin >> a;
	
	cout << a[0];
	
	int ans = 1;
	
	for(int i = 1;i<a.size();i++){
		if(a[i]==a[i-1]){
			ans++;
		}else{
			cout << ans << a[i];
			ans = 1;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}