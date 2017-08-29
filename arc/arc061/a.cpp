#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin>>s;
	
	long long int ans=0;
	long long int sum;
	
	for(int i=0;i<1<<s.size()-1;i++){
		sum=s[0]-'0';
		for(int j=0;j<s.size()-1;j++){
			if(i&(1<<j)){
				ans+=sum;
				sum=0;
			}
			sum=sum*10+(s[j+1]-'0');
		}
		ans+=sum;
	}
	cout<<ans<<endl;
	return 0;
}