#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<map>

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	map<int,int> mp;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		int c = a[i];
		mp[c]++;
	}
	
	map<int,int> vt;
	
	int j = 0;
	for(auto &element:mp){
		vt[element.first]=j;
		j++;
	}
	
	for(int i = 0;i<n;i++){
		cout<<vt[a[i]]<<endl;
	}
	
	return 0;
}