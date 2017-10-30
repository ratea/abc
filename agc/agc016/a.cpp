#include "bits/stdc++.h"
using namespace std;

int main(){
	string z;
	cin>>z;
	
	int ans=1e9+7;
	
	for(int i=0;i<26;i++){
		int exflag=1;
		for(int j=0;j<z.size();j++)if(z[j]!=char('a'+i))exflag=0;
		if(exflag==1)ans=0;;
		string s=z;
		int ssi=s.size();
		int flag=1;
		while(1){
			string ns(ssi-1,'0');
			for(int k=0;k<ssi;k++){
				if(s[k]==char('a'+i)||s[k+1]==char('a'+i)){
					ns[k]=('a'+i);
				}else{
					ns[k]='0';
				}
			}
			ssi--;
			//cout<<char('a'+i)<<endl;
			//cout<<s<<endl;
			//cout<<ssi<<endl;
			flag=1;
			for(int j=0;j<ssi;j++)if(ns[j]!=char('a'+i))flag=0;
			if(flag==1||ssi<=1)break;
			s=ns;
		}
		int aaaa=z.size()-ssi;
		ans=min(ans,aaaa);
	}
	
	cout<<ans<<endl;
	return 0;
}