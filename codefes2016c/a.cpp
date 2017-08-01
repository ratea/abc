#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	int a=0;
	for(int i=0;i<s.size();i++){
		if(a==0&&s[i]=='C')a=1;
		if(a==1&&s[i]=='F'){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	return 0;
}