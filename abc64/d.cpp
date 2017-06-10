#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int b=0;
	int a=0;
	int bs=0;
	int bt=0;
	int as=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==')'&&bt==0){
			bs++;
			as=0;
		}
		
		if(s[i]==')'){
			b++;
			as=0;
		}else{
			a++;
			bt=1;
			as++;
		}
	}
	
	for(int i=0;i<bs;i++){
		cout<<"(";
		}
	
	if(b>a){
		for(int i=0;i<b-a-bs;i++){
			cout<<"(";
			}
		}else if(b<a){
		for(int i=0;i<a-b-as;i++){
			cout<<")";
		}
	}
	cout<<s;
	
	for(int i=0;i<as;i++){
		cout<<")";
	}
	
	cout<<endl;
	return 0;
}