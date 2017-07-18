#include "bits/stdc++.h"
using namespace std;

int main(){
	vector<char> mp(10);
	vector<char> mo(10);
	for(int i=0;i<10;i++){
		char a;
		cin>>a;
		mp[i]=a;
		mo[a-'0']=i+'0';
	}
	
	int n;
	cin>>n;
	vector<string> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i].size();j++){
			char c=a[i][j];
			//cout<<a[i][j]<<" "<<c-'0'<<endl;
			a[i][j]=mp[c-'0'];
			//cout<<a[i][j]<<endl;
		}
	}
	vector<int> sa(10);
	//for(int i=0;i<n;i++)sa[i]=atoi(a[i]);
	
	sort(sa.begin(),sa.end());
	
	//for(int i=0;i<n;i++)a[i]=to_string(sa[i]);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i].size();j++){
			char c=a[i][j];
			//cout<<a[i][j]<<" "<<c-'0'<<endl;
			cout<<mo[c-'0'];
		}
		cout<<endl;
	}
	
	return 0;
}