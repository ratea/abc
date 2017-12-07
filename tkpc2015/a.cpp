#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	if(s[2]=='M'){
		cout<<"Master ";
	}else if(s[2]=='B'){
		cout<<"Bachelor ";
	}else{
		cout<<"Doctor ";
	}
	
	cout<<s[0]<<s[1]<<endl;
	return 0;
}