#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n,q;
	cin>>n>>q;
	
	vector<int> a(n+2,0);
	
	for(int i = 0;i<q;i++){
		int l,r;
		l--;
		r--;
		cin>>l>>r;
		a[l]++;
		a[r+1]--;
	}
	
	int ans=0;
	
	for(int i = 1;i<n+1;i++){
		ans+=a[i];
		if(ans%2==0){
			cout<<0;
		}else{
			cout<<1;
		}
	}
	
	cout<<endl;
	
	return 0;
}