#include<iostream>
using namespace std;

int main(){
	int ans = 0;
	for(int i = 0;i<12;i++){
		string s;
		cin>>s;
		for(int j = 0;j<s.size();j++){
			if(s[j]=='r'){
				ans++;
				break;
			}
		}
	}
	
	cout << ans<<endl;
	
	return 0;
}