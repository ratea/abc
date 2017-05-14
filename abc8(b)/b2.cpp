#include<iostream>
using namespace std;
#include<map>

int main(){
	int n;
	cin>>n;
	map<string,int> mp;
	for(int i = 0;i<n;i++){
		string a;
		cin>>a;
		mp[a]++;
	}
	
	int a=0;
	string s="unko";
	
	for(auto &element:mp){
		if(a<element.second){
			a=element.second;
			s=element.first;
		}
	}
	cout<<s<<endl;
	return 0;
}