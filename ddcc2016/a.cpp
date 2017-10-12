#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	string s="DiscoPresentsDiscoveryChannelProgrammingContest2016";
	for(int i=0;i<51;i++){
		if(i!=0&&i%n==0)cout<<endl;
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}