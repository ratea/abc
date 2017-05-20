#include<iostream>
using namespace std;
#include<set>

int main(){
	int n;
	cin>>n;
	multiset<string> st;
	string ss;
	cin>>ss;
	int tc=0;
	
	for(int i = 1;i<n;i++){
		string s;
		cin>>s;
		for(int j = 0;j<ss.size();j++){
			tc=0;
			string tmp;
			for(int k = 0;k<s.size();k++){
				if(ss[j]==s[k]){
					s[k]=0;
					tmp[tc]=ss[j];
					tc++;
					cout<<s<<endl;
				}
			}
			ss.clear();
			ss=tmp;
		}
	}
	cout<<ss<<endl;
	return 0;
}