#include<iostream>
using namespace std;

int main(){
	string x;
	cin >> x;
	
	for(int i = 0;i<x.size();i++){
		if(x[i]!='o'&&x[i]!='k'&&x[i]!='u'&&x[i]!='c'){
			cout << "NO" << endl;
			return 0;
		}else if(x[i]=='c'&&x[i+1]!='h'){
			cout << "NO" <<endl;
			return 0;
		}else if(x[i]=='c'){
			i++;
		}
	}
	
	cout << "YES" << endl;
	
	return 0;
}