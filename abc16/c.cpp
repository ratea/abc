#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> a(m);
	vector<int> b(m);
	
	vector<int> fri(n,0);
	
	for(int i = 0;i<m;i++){
		cin>>a[i]>>b[i];
		a[i]--;
		b[i]--;
		fri[a[i]]++;
		fri[b[i]]++;
	}
	
	int ans;
	
	for(int i = 0;i<n;i++){
		ans = 0;
		for(int j = 0;j<m;j++){
			if(a[m]==i){
				ans+=fri[b[i]]-1;
			}else if(b[i]==i){
				ans+=fri[a[i]]-1;
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}