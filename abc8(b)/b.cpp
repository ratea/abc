#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n,0);
	vector<string> b(n,0);
	int k = 0;
	
	for(int i = 0;i<n;i++){
		string s;
		cin >> s;
		for(int j = 0;j<k+1;j++){
			if(b[j]==s){
				a[j]++;
				k=j+1;
				break;
			}
			if(b[j]==0){
				b[j]=s;
				k=j+1;
				a[j]++;
				break;
			}
		}
	}
	
	return 0;
}