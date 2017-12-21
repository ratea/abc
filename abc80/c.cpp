#include "bits/stdc++.h"
using namespace std;

vector<vector<int> > f(101,vector<int>(101));
vector<vector<int> > p(101,vector<int>(101));

int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<10;j++)cin>>f[i][j];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<11;j++)cin>>p[i][j];
	}
	
	int ans=-1e9;
	
	for(int i=1;i<(1<<10);i++){
		int tmp=0;
		for(int j=0;j<n;j++){
			int x=0;
			for(int k=0;k<10;k++){
				if((i>>k&1)&&f[j][k])x++;
			}
			tmp+=p[j][x];
		}
		//cout<<tmp<<endl;
		//if(ans<tmp)cout<<i<<" "<<tmp<<" "<<ans<<endl;
		ans=max(ans,tmp);
	}
	cout<<ans<<endl;
	return 0;
}