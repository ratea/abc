#include<iostream>
using namespace std;
#include<vector>
#include<map>

int main(){
	int r,c,k,n;
	cin >> r>>c>>k>>n;
	map< pair<int,int> ,int > rc;
	vector<int> rm(r+1);
	vector<int> cm(c+1);
	for(int i = 1;i<n+1;i++){
		int a,b;
		cin >> a>> b;
		rm[a]++;
		cm[b]++;
		rc[ pair<int,int>(a,b) ]=1;
	}

	//cout << "a" << endl;

	int ans = 0;

	for(int i = 1;i<r+1;i++){
		for(int j = 1;j<c+1;j++){
			if((rm[i]+cm[j]-rc.count( pair<int,int>(i,j) ))==k)ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
