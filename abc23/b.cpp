#include<iostream>
using namespace std;

int main(){
	int n;
	string s;
	
	cin >> n >> s;
	
	int st;
	
	if(s[0]=='a')st=0;
	if(s[0]=='b')st=1;
	if(s[0]=='c')st=2;
	
	for(int i = 1;i<n;i++){
		if(st==0&&s[i]=='b'){
			st=1;
		}else if(st==1&&s[i]=='c'){
			st=2;
		}else if(st==2&&s[i]=='a'){
			st=0;
		}else{
			cout << -1 << endl;
			return 0;
		}
	}
	
	if(n%2==0){
		cout << -1 << endl;
		return 0;
	}
	
	if(s[0]=='a'&&s[n-1]=='a'){
		cout << -1 << endl;
		return 0;
	}
	if(s[0]=='c'&&s[n-1]=='c'){
		cout << -1 << endl;
		return 0;
	}
	
	if(s[0]=='b'&&s[n-1]=='a'){
		cout << -1 << endl;
		return 0;
	}
	if(s[0]=='b'&&s[n-1]=='c'){
		cout << -1 << endl;
		return 0;
	}
	
	if(s[0]=='a'&&s[n-1]=='b'){
		cout << -1 << endl;
		return 0;
	}
	
	if(s[0]=='c'&&s[n-1]=='b'){
		cout << -1 << endl;
		return 0;
	}
	
	cout << n/2 << endl;
	return 0;
}