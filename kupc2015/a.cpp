#include  "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int ans=0;
		string s;
		cin>>s;
		for(int i=0;i+4<s.size();i++){
			if(s[i]=='t'&&s[i+1]=='o'&&s[i+2]=='k'&&s[i+3]=='y'&&s[i+4]=='o'){
				ans++;
				i+=4;
			}else if(s[i]=='k'&&s[i+1]=='y'&&s[i+2]=='o'&&s[i+3]=='t'&&s[i+4]=='o'){
				ans++;
				i+=4;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}