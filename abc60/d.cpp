#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
	int n,w;
	cin>>n>>w;
	vector<int> kw(n+1);
	vector<int> v(n+1);
	
	vector<int> ans(w+1,0);
	
	for(int i = 1;i<n+1;i++){
		cin>>kw[i]>>v[i];
	}
	
	for(int i = 1;i<n+1;i++){
		for(int j = w;j>=0;j--){
			if(j-kw[i]>=0)ans[j]=max(ans[j],ans[j-kw[i]]+v[i]);
		}
	}
	
	cout << ans[w]<<endl;
	
	return 0;
}