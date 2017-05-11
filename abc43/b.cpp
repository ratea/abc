#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	string ans;
	int a=0;
	
	for(int i = 0;i<s.size();i++){
		//cout<<s[i]<<endl;
		if(s[i]=='0'){
			ans[a]='0';
			a++;
		}else if(s[i]=='1'){
			ans[a]='1';
			a++;
		}else if(a!=0){
			a--;
		}
	}
	
	for(int i = 0;i<a;i++){
		cout<<ans[i];
	}
	cout<<endl;
	return 0;
}