#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	int a=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(')a++;
		if(s[i]==')')a--;
		if(s[i]=='*'){
			cout<<a<<endl;
			return 0;
		}
	}
	
	return 0;
}
		