#include<iostream>
using namespace std;

	int main(){
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			if(s[i]=='A'){
				cout<<"A";
				i+=7;
			}
			
			if(s[i]=='L'){
				cout<<"<";
				i+=4;
			}
			
			if(s[i]=='R'){
				cout<<">";
				i+=5;
			}
			if(i==s.size()){
				break;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
		return 0;
	}