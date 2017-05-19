#include<iostream>
using namespace std;

int main(){
	char x;
	string s;
	cin>>x>>s;
	
	for(int i = 0; i < s.size(); i++){
		if(x!=s[i])cout<<s[i];
	}
	cout<<endl;
	return 0;
}