#include<iostream>
using namespace std;
#include<vector>

int main(){
	string s;
	cin>>s;
	vector<char> t(s.size());
	
	for(int i = 0;i<s.size();i++){
		t[i]=s[i];
	}
	
	cout<<t<<" "<<s<<endl;
	return 0;
}