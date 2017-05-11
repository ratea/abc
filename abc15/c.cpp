#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,k;
	
	cin >> n >> k;
	
	vector< vector<int> > t( n,vector<int>(k) );
	
	for(int i = 0;i<n;i++){
		for(int j = 0;j<k;j++){
			cin >> t[i][j];
		}
	}
	
	
	
	return 0;
}