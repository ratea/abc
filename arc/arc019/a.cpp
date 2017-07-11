#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='O')s[i]='0';
		if(s[i]=='D')s[i]='0';
		if(s[i]=='I')s[i]='1';
		if(s[i]=='Z')s[i]='2';
		if(s[i]=='S')s[i]='5';
		if(s[i]=='B')s[i]='8';
	}
	
	cout<<s<<endl;
	return 0;
}