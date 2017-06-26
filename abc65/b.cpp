#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n;
	cin>>n;
	vector<int> a(n+1);
	
	for(int i=1;i<n+1;i++){
		cin>>a[i];
	}
	
	int b=0;
	int k=1;
	for(int i=0;i<n;i++){
		k=a[k];
		if(k==2){
			b=1;
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}