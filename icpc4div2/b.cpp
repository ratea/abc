#include "bits/stdc++.h"
using namespace std;

int main(){
	while(1){
		string s;
		getline(cin,s);
		
		if(s[0]=='.')break;
		
		int a=0;
		int b=0;
		int ta=0;
		int tb=0;
		
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				a++;
				tb=b;
			}
			if(s[i]=='['){
				b++;
				ta=a;
			}
			if(s[i]==')'){
				if(b!=tb){
					b=-1;
					break;
				}
				a--;
			}
			if(s[i]==']'){
				if(a!=ta){
					a=-1;
					break;
				}
				b--;
			}
			if(a<0||b<0)break;
		}
		if(a==0&&b==0){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
	
	return 0;
}