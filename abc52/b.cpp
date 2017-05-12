#include<iostream>
using namespace std;

int main(){
	int n;
	string s;
	cin>>n>>s;
	int x = 0;
	int ans = 0;
	for(int i = 0;i<s.size();i++){
		if(s[i]=='I'){
			x+=1;
			ans=max(ans,x);
		}else{
			x--;
		}
	}
	cout<<ans<<endl;
	return 0;
}