#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n;
	cin>>n;
	
	vector<int> k(n+1,1);
	for(int i = 1;i<n+1;i++)k[i]=k[i-1]*3;
	
	vector<string> s(3);
	s[0]="a";
	s[1]="b";
	s[2]="c";
	
	for(int i = 0;i<k[n-1]*3;i++){
		for(int j = n-1;j>=0;j--){
			cout<<s[(i/k[j])-(3*(i/k[j+1]))];
		}
		cout << endl;
	}
	return 0;
}