#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	for(int i=0;i<s.size();i++){
		if(i==a||i==b||i==c||i==d)cout<<"\"";
		cout<<s[i];
	}
	if(s.size()<=d)cout<<"\"";
	cout<<endl;
	return 0;
}