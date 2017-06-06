#include<iostream>
using namespace std;
#include<vector>

int main(){
	vector<int> d(7);
	vector<int> j(7);
	int ans=0;
	
	for(int i=0;i<7;i++)cin>>d[i];
	for(int i=0;i<7;i++)cin>>j[i];
	
	for(int i=0;i<7;i++){
		ans+=max(d[i],j[i]);
	}
	cout<<ans<<endl;
	return 0;
}