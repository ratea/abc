#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	
	for(long long int i=1;i<3501;i++){
		for(long long int j=1;j<3501;j++){
			long long int p=n*i*j;
			long long int q=4*i*j-n*i-n*j;
			if(q>0&&p%q==0){
				cout<<i<<" "<<j<<" "<<p/q<<endl;
				return 0;
			}
		}
	}
	
	return 0;
}