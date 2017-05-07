#include<iostream>
using namespace std;
#include<map>

int main(){
	int n,a,b;
	map<string,int> s;
	cin >> n>> a>> b;
	for(int i = 0;i<n;i++){
		string d;
		cin>>d;
		int c;
		cin>>c;
		if(c<a)c=a;
		if(c>b)c=b;
		s[d]+=c;
	}
	
	//cout<<s["East"]<<" "<<s["West"]<<endl;
	
	if(s["East"]-s["West"]>0){
		cout<<"East "<<s["East"]-s["West"]<<endl;
	}else if(s["East"]-s["West"]<0){
		cout<<"West "<<s["West"]-s["East"]<<endl;
	}else{
		cout<<0<<endl;
	}
	
	return 0;
}