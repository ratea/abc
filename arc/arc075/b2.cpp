#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
#include<queue>

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	priority_queue<int> h;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		h.push(x);
	}
	
	int hp=0;
	
	int ans=0;
	
	while(1){
		ans++;
		int tmp=h.top();
		h.pop();
		h.push(tmp-(a-b));
		hp+=b;
		if(h.top()<=hp){
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}