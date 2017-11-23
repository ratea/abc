#include "bits/stdc++.h"
using namespace std;

int main(){
	vector<string> s;
	string x;
	while(cin>>x){
		s.push_back(x);
		//if(x=="00")break;
	}
	sort(s.begin(),s.end());
	cout<<s[6]<<endl;
	return 0;
}