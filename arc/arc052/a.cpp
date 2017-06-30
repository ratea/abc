#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]-'0'>=0&&s[i]-'0'<=9)cout<<s[i];
	}
	cout<<endl;
	return 0;
}