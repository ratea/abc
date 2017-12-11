#include "bits/stdc++.h"
using namespace std;

string rev(string s){
	string tmp(s.size(),0);
	for(int i=0;i<s.size();i++)tmp[i]=s[s.size()-1-i];
	return tmp;
}

int main(){
	int n;
	cin>>n;
	vector<string> s(n);
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		s[i]=rev(x);
	}
	sort(s.begin(),s.end());
	for(int i=0;i<n;i++)cout<<rev(s[i])<<endl;
}