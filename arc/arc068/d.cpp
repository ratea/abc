#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	map<int,int> mp;
	vector<int> x;
	
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		x.push_back(a);
		mp[x[i]]++;
	}
	
	//cout<<mp.size()<<endl;
	
	if(mp.size()%2==0){
		cout<<mp.size()-1<<endl;
	}else{
		cout<<mp.size()<<endl;
	}
	return 0;
}