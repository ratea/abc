#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int i;
	int st=0;
	for(i =0;i<s.size();i++){
		if(st==0&&(s[i]=='i'||s[i]=='I')){
			st=1;
		}
		if(st==1&&(s[i]=='c'||s[i]=='C')){
			st=2;
		}
		if(st==2&&(s[i]=='t'||s[i]=='T')){
			st=3;
		}
	}
	if(st==3){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}