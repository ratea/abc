#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	vector<int> a(3);
	cin>>n>>a[0]>>a[1]>>a[2];
	
	sort(a.begin(),a.end());
	
	int sum=a[0]+a[1]+a[2];
	
	int x=n/sum;
	
	if(n%sum==0){
		cout<<x*3<<endl;
		return 0;
	}
	
	int i;
	
	int np=sum*x;
	
	for(i=0;i<3;i++){
		np+=a[2-i];
		if(np>=n){
			cout<<x*3+i+1<<endl;
			return 0;
		}
	}
	
}