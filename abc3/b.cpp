#include<iostream>
using namespace std;

int main(){
	string s,t;
	cin >> s;
	cin >> t;
	int ans = 1;
	
	for(int i = 0;i < s.size();i++){
		if(s[i]!=t[i]){
			if(s[i]!='@'&&t[i]!='@'){
				ans = 0;
				break;
			}
			if(s[i]=='@'){
				if(t[i]!='a'&&t[i]!='t'&&t[i]!='c'&&t[i]!='o'&&t[i]!='d'&&t[i]!='e'&&t[i]!='r'&&t[i]!='@'){
					ans = 0;
					break;
				}
			}else if(t[i]=='@'){
				if(s[i]!='a'&&s[i]!='t'&&s[i]!='c'&&s[i]!='o'&&s[i]!='d'&&s[i]!='e'&&s[i]!='r'&&s[i]!='@'){
					ans = 0;
					break;
				}
			}
		}
	}
	
	if(ans==1){
		cout << "You can win" << endl;
	}else{
		cout << "You will lose" << endl;
	}
	
	return 0;
}