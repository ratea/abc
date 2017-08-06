#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<char> a(k);
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	
	bool flag;
	
	while(1){
		string s=to_string(n);
		flag=true;
		for(int i=0;i<s.size();i++){
			for(int j=0;j<a.size();j++){
				if(s[i]==a[j]){
					flag=false;
				}
			}
		}
		if(flag){
			cout<<n<<endl;
			return 0;
		}
		n++;
	}
	return 0;
}