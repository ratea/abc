#include<iostream>
using namespace std;
#include<vector>
#include<cmath>

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> ans(n);
	
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	
	ans[0]=0;
	ans[1]=abs(a[1]-a[0]);
	
	for(int i = 2;i<n;i++){
		int ans1=ans[i-1]+(abs(a[i]-a[i-1]));
		int ans2=ans[i-2]+(abs(a[i]-a[i-2]));
		ans[i]=min(ans1,ans2);
	}
	
	cout<<ans[n-1]<<endl;
	return 0;
}