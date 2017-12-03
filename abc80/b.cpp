#include "bits/stdc++.h"
using namespace std;

int main(){
	int x;
	cin>>x;
	string s=to_string(x);
	
	int a=0;
	for(int i=0;i<s.size();i++)a+=s[i]-'0';
	
	if(x%a==0){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
	
	return 0;
}