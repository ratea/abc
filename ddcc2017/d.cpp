#include "bits/stdc++.h"
using namespace std;

int main(){
	int h,w;
	cin>>h>>w;
	int a,b;
	cin>>a>>b;
	vector<string> s(h);
	for(int i=0;i<h;i++){
		cin>>s[i];
	}
	
	int y=0;
	int x=0;
	
	int S=0;
	
	for(int i=0;i<h/2;i++){
		for(int j=0;j<w;j++){
			if(s[i][j]=='S'&&s[h-i-1][j]=='S')y++;
			if(s[i][j]=='S')S++;
			if(s[h-i-1][j]=='S')S++;
		}
	}
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w/2;j++){
			if(s[i][j]=='S'&&s[i][w-j-1]=='S'){
				x++;
			}
		}
	}
	
	//cout<<y<<" "<<x<<endl;
	
	long long int ans=0;
	
	if(y>x){
		ans+=(y-x)*a;
		ans+=max(a,b)*x;
		ans+=min(a,b)*(x/2);
	}else if(y!=x){
		ans+=(x-y)*b;
		ans+=max(a,b)*y;
		ans+=min(a,b)*(y/2);
	}else{
		ans+=max(a,b)*x;
		ans+=min(a,b)*(y/2);
	}
	
	if(x*2<S)ans+=b;
	if(y*2<S)ans+=a;
	
	cout<<ans<<endl;
	
	return 0;
}