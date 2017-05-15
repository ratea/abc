#include<iostream>
using namespace std;
#include<vector>
#include<set>
#include<map>

int main(){
	int n,l;
	cin>>n>>l;
	map<string,int> s;
	for(int i = 0;i<n;i++){
		string a;
		cin>>a;
		s[a]++;
	}
	
	for(auto &e:s){
		for(int i = 0;i < e.second;i++){
			cout<<e.first;
		}
	}
	cout<<endl;
	
	return 0;
}