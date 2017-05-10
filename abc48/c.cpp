#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n,x;
	cin>>n>>x;
	vector<int> a(n);
	long long int ans = 0;
	for(int i = 0;i<n;i++){
		//cout<<i<<" "<<ans<<endl;
		cin>>a[i];
		if(i!=0){
			if(a[i]+a[i-1]>x){
				ans+=a[i]-(x-a[i-1]);
				a[i]=x-a[i-1];
			}
		}else if(a[0]>x){
				ans=a[0]-x;
				a[0]=x;
			}
		}
	cout<<ans<<endl;
	return 0;
}