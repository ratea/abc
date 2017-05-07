#include<iostream>
using namespace std;
#include<vector>


int main(){
	int r,c,k,n;
	cin>>r>>c>>k>>n;
	vector<int> rm(n+1);
	vector<int> cm(n+1);
	
	for(int i = 1;i<n+1;i++){
		cin >> rm[i]>>cm[i];
	}
	
	int ans = 0;
	
	for(int i = 1;i<r+1;i++){
		for(int j = 1;j<c+1;j++){
			int sum = 0;
			for(int l = 1;l<n+1;l++){
				if(i==rm[l]||j==cm[l]){
					sum++;
				}
			}
			if(sum==k)ans++;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}