#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n;
	cin>>n;
	vector<string> s(n);
	
	int r=0;
	int b=0;
	
	for(int i=0;i<n;i++){
		cin>>s[i];
		for(int j=0;j<n;j++){
			if(s[i][j]=='R')r++;
			if(s[i][j]=='B')b++;
		}
	}
	if(r>b){
		cout<<"TAKAHASHI"<<endl;
	}else if(r<b){
		cout<<"AOKI"<<endl;
	}else{
		cout<<"DRAW"<<endl;
	}
	return 0;
}