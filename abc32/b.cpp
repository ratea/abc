#include<iostream>
using namespace std;
#include<set>

int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	
	set<string> st;
	
	if(s.size()<k){
		cout<<0<<endl;
		return 0;
	}
	if(s.size()==k){
		cout<<1<<endl;
		return 0;
	}
	
	string buf;
	
	for(int i = 0;i<=s.size()-k;i++){
		buf=s[i];
		for(int j = 1;j<k;j++){
			buf=buf+s[i+j];
		}
		st.insert(buf);
	}
	
	cout<<st.size()<<endl;
	
	return 0;
}