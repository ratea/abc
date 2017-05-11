#include<iostream>
using namespace std;
#include<map>

int main(){
	int n;
	cin>>n;
	int sum=0;
	
	map<string,int> mp;
	
	for(int i =0;i<n;i++){
		string s;
		int p;
		cin>>s>>p;
		sum+=p;
		mp[s]=p;
	}
	
	for(auto &element:mp){
		if(sum<2*element.second){
			cout<<element.first<<endl;
			return 0;
		}
	}
	
	cout<<"atcoder"<<endl;
	return 0;
}