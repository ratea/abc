#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	int ans=0;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				ans++;
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	
	cout<<ans<<endl;
	
	
	return 0;
}