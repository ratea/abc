#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	vector<int> h(n);
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	
	int hp=0;
	
	sort(h.begin(),h.end(),greater<int>());
	
	int ans=0;
	
	while(1){
		ans++;
		h[0]=h[0]-(a-b);
		hp+=b;
		sort(h.begin(),h.end(),greater<int>());
		if(h[0]<=hp){
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}