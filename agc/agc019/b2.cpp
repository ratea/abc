#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	long long int kai=0;
	
	for(int i=0;i<s.size();i++){
		if(i<s.size()-1&&s[i]==s[i+1]){
			kai++;
			for(int j=1;j<i+1&&i+j+1<s.size()+1;j++){
				if(s[i-j]==s[i+1+j]){
					kai++;
				}else{
					break;
				}
			}
		}
		for(int j=1;j<i+1&&i+j<s.size()+1;j++){
			if(s[i-j]==s[i+j]){
				kai++;
			}else{
				break;
			}
		}
	}
	cout<<kai<<endl;
	cout<<s.size()*(s.size()-1)/2+1-kai<<endl;
	
	return 0;
}