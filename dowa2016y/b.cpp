#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	int tmp=0;
	int ans=0;
	
	for(int i=0;i<s.size()&&ans<s.size()-i;i++){
		if(s[i]=='2'||s[i]=='?'){
			i++;
			int flag=0;
			tmp=0;
			while(1){
				if(flag==0){
					if(s[i]=='5'||s[i]=='?'){
						flag=1;
						tmp+=2;
					}else{
						break;
					}
				}else{
					if(s[i]=='2'||s[i]=='?'){
						flag=0;
					}else{
						break;
					}
				}
				i++;
			}
			ans=max(ans,tmp);
		}
	}
	
	for(int i=0;i<s.size()&&ans<s.size()-i;i++){
		if(s[i]=='2'||s[i]=='?'){
			i++;
			if(s[i]=='2'||s[i]=='?'){
				i++;
				int flag=0;
				tmp=0;
				while(1){
					if(flag==0){
						if(s[i]=='5'||s[i]=='?'){
							flag=1;
							tmp+=2;
						}else{
							break;
						}
					}else{
						if(s[i]=='2'||s[i]=='?'){
							flag=0;
						}else{
							break;
						}
					}
					i++;
				}
				ans=max(ans,tmp);
			}
		}
	}
	
	cout<<ans<<endl;
	return 0;
}