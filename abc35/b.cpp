#include<iostream>
using namespace std;
#include<cmath>


int main(){
	string s;
	int t;
	cin>>s>>t;
	
	int x=0;
	int y=0;
	int z=0;
	
	for(int i = 0;i<s.size();i++){
		if(s[i]=='L')x--;
		if(s[i]=='R')x++;
		if(s[i]=='U')y++;
		if(s[i]=='D')y--;
		if(s[i]=='?')z--;
	}
	
	x=abs(x);
	y=abs(y);
	int ans=x+y;
	if(t==1)ans-=z;
	if(t==2)ans+=z;
	
	if(ans<0){
		if(ans%2==0){
			ans=0;
		}else{
			ans=1;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}