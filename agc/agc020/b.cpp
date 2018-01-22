#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	vector<long long int> a(n);
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
	long long int tmp;
	long long int x=2;
	for(long long int i=n-1;i>=0;i--){
		tmp=x/a[i];
		tmp*=a[i];
		while(x>tmp){
			tmp+=a[i];
		}
		x=tmp;
	}
	
	long long int tst=x;
	for(int i=0;i<n;i++){
		tst-=tst%a[i];
	}
	if(tst!=2){
		cout<<-1<<endl;
		return 0;
	}
	
	long long int y=2;
	
	for(long long int i=n-1;i>=0;i--){
		tmp=y/a[i];
		tmp*=a[i];
		while(y>tmp){
			tmp+=a[i];
		};
		tmp+=a[i]-1;
		if(i!=0){
			tmp-=tmp%a[i-1];
		}
		y=tmp;
		//cout<<y<<endl;
	}
	
	cout<<x<<" "<<y<<endl;
	
}
