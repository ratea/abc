#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end(),greater<int>() );
	int x=0;
	int y=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			x+=a[i];
		}else{
			y+=a[i];
		}
	}
	
	int ans=max(x,y);
	cout<<ans<<endl;
	return 0;
}