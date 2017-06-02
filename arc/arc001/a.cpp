#include<iostream>
using namespace std;
#include<vector>
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> a(4,0);
	for(int i = 0;i<n;i++){
		a[s[i]-'0'-1]++;
	}
	
	int ansmax,ansmin;
	ansmax=0;
	ansmin=101;
	
	for(int i = 0;i<4;i++){
		ansmax=max(ansmax,a[i]);
		ansmin=min(ansmin,a[i]);
	}
	
	cout<<ansmax<<" "<<ansmin<<endl;
	return 0;
}