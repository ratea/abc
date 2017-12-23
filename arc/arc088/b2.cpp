#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	vector<int> a;
	int tmp=1;
	int flag=s[0]-'0';
	for(int i=1;i<s.size();i++){
		if(s[i]-'0'==flag){
			tmp++;
		}else{
			a.push_back(tmp);
			tmp=1;
			flag=abs(flag-1);
		}
	}
	a.push_back(tmp);
	
	if(a.size()==1){
		cout<<s.size()<<endl;
	}else if(a.size()==2){
		cout<<max(a[0],a[1])<<endl;
	}else{
		int ans=0;
		int l=a[0];
		int r=0;
		for(int i=0;i<a.size();i++)r+=a[i];
		for(int i=0;i<a.size()-1;i++){
			r-=a[i];
			l+=a[i+1];
			ans=max(ans,min(l,r));
		}
		cout<<ans<<endl;
	}
}