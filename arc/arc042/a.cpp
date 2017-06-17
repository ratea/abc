#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1,0);
	vector<int> b(m);
	for(int i=0;i<m;i++){
		int c;
		cin>>c;
		b[i]=c;
	}
	
	for(int i=m-1;i>=0;i--){
		if(a[b[i]]==0){
			cout<<b[i]<<endl;
			a[b[i]]=1;
		}
	}
	
	for(int i=1;i<=n;i++){
		if(a[i]==0)cout<<i<<endl;
	}
	
	return 0;
}