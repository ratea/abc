#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	int ans = 0;
	for(int i = 0;i<a;i++){
		ans+=i+1;
	}
	cout<<ans<<endl;
	return 0;
}