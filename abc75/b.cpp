#include "bits/stdc++.h"
using namespace std;

int main(){
	int h,w;
	cin>>h>>w;
	vector<string> s(h);
	for(int i=0;i<h;i++)cin>>s[i];
	
	int x[9]={-1,0,1,-1,0,1,-1,0,1};
	int y[9]={-1,-1,-1,0,0,0,1,1,1};
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(s[i][j]=='#'){
				cout<<"#";
			}else{
				int ans=0;
				for(int k=0;k<9;k++){
					if((i+y[k]>=0&&j+x[k]>=0)&&(i+y[k]<h&&j+x[k]<w)&&s[i+y[k]][j+x[k]]=='#')ans++;
				}
				cout<<ans;
			}
		}
		cout<<endl;
	}
	
	return 0;
}