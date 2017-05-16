#include<iostream>
using namespace std;
#include<vector>

int main(){
	string s;
	cin>>s;
	
	vector<string> ans(8);
	ans[1]="La";
	ans[2]="So";
	ans[3]="Fa";
	ans[4]="Mi";
	ans[5]="Re";
	ans[6]="Do";
	ans[0]="Si";
	int j = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i]=='W'&&s[i+1]=='W'&&s[i+2]=='B'&&s[i+3]=='W'&&s[i+4]=='B'&&s[i+5]=='W'&&s[i+6]=='W'){
			cout<<ans[j%7]<<endl;
			return 0;
		}
		if(s[i+1]=='W')j++;
	}
	
	return 0;
}