#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=1;
	
	int flag=0;
	int a;
	cin>>a;
	
	for(int i=1;i<n;i++){
		int b;
		cin>>b;
		if(flag==0){
			if(a>b){
				flag=1;
			}else if(a<b){
				flag=2;
			}
		}else if(flag==1){
			if(a<b){
				flag=0;
				ans++;
			}
		}else if(flag==2){
			if(a>b){
				flag=0;
				ans++;
			}
		}
		a=b;
	}
	
	cout<<ans<<endl;
	return 0;
}