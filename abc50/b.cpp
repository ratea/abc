#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n;
	int ans = 0;
	cin>>n;
	vector<int> t(n);
	for(int i = 0;i<n;i++){
		cin>>t[i];
		ans+=t[i];
	}
	int m;
	cin>>m;
	vector<int> p(m);
	vector<int> x(m);
	for(int i = 0;i<m;i++){
		cin>>p[i]>>x[i];
		p[i]--;
		cout<<ans-t[p[i]]+x[i]<<endl;
	}
	return 0;
}