#include<iostream>
using namespace std;
#include<map>

int main(){
	string w;
	cin>>w;
	map<char,int> a;
	
	for(int i = 0;i<w.size();i++){
		char s = w[i];
		a[s]++;
	}
	
	for(auto &element:a){
		int b = element.second;
		if(b%2==1){
			cout<<"No"<<endl;
			return 0;
		}
	}
	
	cout<<"Yes"<<endl;
	return 0;
}