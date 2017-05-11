#include<iostream>
using namespace std;
#include<cmath>

int main(){
	int n;
	cin>>n;
	
	int ans = n;
	
	for(int i = 1;i<=n;i++){
		int m = n/i;
		int ans2 = abs(i-m)+(n-(i*m));
		ans = min(ans,ans2);
	}
	cout<<ans<<endl;
	return 0;
}