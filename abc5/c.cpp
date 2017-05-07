#include<iostream>
using namespace std;

int main(){
	int t,n,m;
	cin >> t >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cin >> m;
	int b[m];
	for(int i = 0;i<m;i++){
		cin >> b[i];
	}
	
	int ans = 0;
	
	int j=0;
	
	for(int i = 0;i<m;i++){
		ans = 0;
		for(int k = j;a[k]<b[i]+t;k++){
			if(k>n){
				ans=0;
				break;
			}
			if(b[i]-a[k]>=0&&b[i]-a[k]<=t){
				ans=1;
				j = k+1;
				break;
			}else{
				ans=0;
			}
		}
		if(ans == 0)break;
	}
	
	if(ans == 1){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
	
	return 0;
}