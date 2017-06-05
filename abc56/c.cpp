#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
	int i;
	for(i=0;ans<n;i++){
		ans+=i;
	}
	
	cout<<i-1<<endl;
	return 0;
}