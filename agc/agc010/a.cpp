#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int g=0;
	int k=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a%2==0){
			g++;
		}else{
			k++;
		}
	}
	
	if(k%2==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}