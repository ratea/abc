#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	for(int i=0;i<s.size()-2;i++){
		if(s[i]==s[i+1]){
			cout<<i+1<<" "<<i+2<<endl;
			return 0;
		}
		if(s[i]==s[i+2]){
			cout<<i+1<<" "<<i+3<<endl;
			return 0;
		}
	}
	
	if(s[s.size()-2]==s[s.size()-1]){
		cout<<s.size()-1<<" "<<s.size()<<endl;
		return 0;
	}
	
	cout<<-1<<" "<<-1<<endl;
	
	return 0;
}