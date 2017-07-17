#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
	int i=1;
	while(ans<n){
		if(i<10){
			ans++;
		}else if(i%11==0&&i<100){
			ans++;
		}else if(i%111==0&&i<1000){
			ans++;
		}else if(i%1111==0&&i<10000){
			ans++;
		}else if(i%11111==0&&i<100000){
			ans++;
		}else if(i%111111==0)ans++;
		i++;
	}
	cout<<i-1<<endl;
	return 0;
}
		