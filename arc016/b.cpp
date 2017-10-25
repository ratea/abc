#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> s(n);
	for(int i=0;i<n;i++)cin>>s[i];
	
	int ans=0;
	
	for(int i=0;i<s[0].size();i++){
		for(int j=0;j<n;j++){
			if(s[j][i]=='o'){
				ans++;
				while(j+1<n&&s[j+1][i]=='o')j++;
			}
			if(s[j][i]=='x'){
				ans++;
			}
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}