#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int ma=0;
	int mi=1001;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		ma=max(ma,a);
		mi=min(mi,a);
	}
	
	cout<<ma-mi<<endl;
	return 0;
}