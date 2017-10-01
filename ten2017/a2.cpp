#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	
	if(n%2==0){
		cout<<n/2<<" "<<n<<" "<<n<<endl;
	}else{
		double x=n;
		for(double i=1;;i++){
			for(double j=1;;j++){
				if((1+n)/n*2){
					cout<<x<<" "<<i<<" "<<j<<endl;
					return 0;
				}
			}
		}
	}
	return 0;
}