#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	sort( a.begin(),a.end() );
	int ans=0;
	
	for(int i = 0;i<n;i++){
		for(int j = i+1;a[j]<2*a[i]+1&&j<n;j++){
			//cout << a[i] << a[j] << endl;
			if(a[j]==(a[i]*2)){
				ans++;
				break;
			}
		}
	}
	
	cout << n-ans << endl;
	
	return 0;
}