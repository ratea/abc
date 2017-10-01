#include "bits/stdc++.h"
using namespace std;

string ex(long long int a){
	string s="000000000000000000000000000000";
	for(int i=0;i<30;i++){
		if(a&1<<i){
			s[29-i]='1';
		}
	}
	
	//cout<<s<<endl;
	
	return s;
}

int main(){
	long long int n,k;
	cin>>n>>k;
	
	string s1;
	s1=ex(k);
	string s2="000000000000000000000000000000";
	string s3="000000000000000000000000000000";
	
	
	long long int cnt=0;
	for(int i=0;i<30;i++){
		if(cnt==0&&s1[i]=='1'){
			cnt++;
		}else if(cnt==1){
			s3[i]='1';
		}
	}
	
	//cout<<s1<<endl;
	//cout<<s2<<endl;
	//cout<<s3<<endl;
	
	
	long long int ans1=0;
	long long int ans2=0;
	long long int ans3=0;
	
	long long int ans=0;
	
	vector<string> a(n);
	vector<long long int> b(n);
	int flag;
	for(int i=0;i<n;i++){
		long long int x;
		cin>>x>>b[i];
		a[i]=ex(x);
		
		flag=0;
		for(int j=0;j<30;j++){
			if(s1[j]=='0'&&a[i][j]=='1'){
				flag=1;
				break;
			}
		}
		if(flag==0)ans1+=b[i];
		
		/*
		for(int l=0;l<15;l++){
			s2="000000000000000000000000000000";
			int cnt=0;
			for(int m=0;m<30;m++){
				if(cnt<=l&&s1[m]=='1'){
					cnt++;
					s2[m]='1';
				}else if(cnt==l+1&&s1[m]=='1'){
					cnt++;
				}else if(cnt>l+1){
					s2[m]='1';
				}
			}
			
			//cout<<s2<<endl;
			
			ans2=0;
			flag=0;
			for(int j=0;j<30;j++){
				if(s2[j]=='0'&&a[i][j]=='1'){
					flag=1;
					break;
				}
			}
			if(flag==0)ans2+=b[i];
			ans=max(ans,ans2);
		}
		
		*/
		
		
		flag=0;
		for(int j=0;j<30;j++){
			if(s3[j]=='0'&&a[i][j]=='1'){
				flag=1;
				break;
			}
		}
		if(flag==0)ans3+=b[i];
	}
	
	for(int l=0;l<30;l++){
		s2="000000000000000000000000000000";
		int cnt=0;
		for(int m=0;m<30;m++){
			if(cnt<=l&&s1[m]=='1'){
				cnt++;
				s2[m]='1';
			}else if(cnt==l+1&&s1[m]=='1'){
				cnt++;
			}else if(cnt>l+1){
				s2[m]='1';
			}
		}
		//cout<<s2<<endl;
		ans2=0;
		for(int i=0;i<n;i++){
			//cout<<s2<<endl;
			
			flag=0;
			for(int j=0;j<30;j++){
				if(s2[j]=='0'&&a[i][j]=='1'){
					flag=1;
					break;
				}
			}
			if(flag==0)ans2+=b[i];
		}
		//cout<<ans2<<endl;
		ans=max(ans,ans2);
	}
	
	ans=max(ans1,max(ans,ans3));
	cout<<ans<<endl;
	
	return 0;
}