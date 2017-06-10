#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(9,0);
	for(int i=0;i<n;i++){
		int b;
		cin>>b;
		if(b>=3200)b=3200;
		a[b/400]++;
	}
	
	int ans=0;
	for(int i=0;i<8;i++){
		if(a[i]!=0)ans++;
	}
	if(ans==0){
		ans++;
		a[8]--;
	}
	cout<<ans<<" "<<ans+a[8]<<endl;
	return 0;
}