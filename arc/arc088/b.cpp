#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	int ans=0;
	int ch=1;
	int flag=s[0]-'0';
	int tmpa=0;
	int tmpb=1e9;
	int mm=1e9;
	int ans2,ans3;
	for(int i=0;i<s.size();i++){
		if(s[i]-'0'==flag){
			tmpa++;
			ans3=tmpa+tmpb;
		}else{
			//cout<<tmpa<<" "<<tmpb<<endl;
			if(ch==2)ans2=tmpa+tmpb;
			if(ch>2){
				mm=min(mm,tmpa+tmpb);
			}
			ans3=tmpa+tmpb;
			tmpb=tmpa;
			tmpa=1;
			flag=abs(flag-1);
			ch++;
		}
	}
	ans3=tmpa+tmpb;
	//cout<<ans2<<" "<<ans3<<endl;
	if(mm>ans2&&mm>ans3)mm=max(ans2,ans3);
	if(ch==1){
		cout<<s.size()<<endl;
	}else if(ch==2){
		cout<<max(tmpa,tmpb)<<endl;
	}else if(ch==3){
		cout<<min(ans2,min(ans3,mm))<<endl;
	}else{
		cout<<mm<<endl;
	}
}