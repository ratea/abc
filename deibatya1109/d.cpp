#include "bits/stdc++.h"
using namespace std;

int main(){
	int h,w,n;
	cin>>h>>w>>n;
	vector<int> a(n);
	vector<int> b(n);
	map<int,map<int,int> > mp;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		mp[a[i]][b[i]]++;
	}
	
	map<int,int> ans;
	
	for(int i=0;i<n;i++){
		for(int i=0;i<9;i++){
			
	
	
	return 0;
}