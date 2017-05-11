#include<iostream>
using namespace std;
#include<map>

int main(){
	string s;
	cin>>s;
	map<char,int> mp;
	for(int i = 0;i<s.size();i++){
		mp[s[i]]++;
	}
	
	for(int i = 0;i<5;i++){
		cout << mp['A'+i]<<" ";
	}
	
	cout <<mp['A'+5]<<endl;
	
	return 0;
}