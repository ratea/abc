#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n;
	cin>>n;
	
	
	
	if(n%2==0){
		cout<<n/2<<" "<<n<<" "<<n<<endl;
	}else{
		n*=2;
		set<long long int> y;
		for(int i=1;i<=8;i++){
			if(n%i==0)y.insert(i);
		}
		
		long long int a=8;
		while(1){
			
			for(int i=0;i<y.size()&&y[i]<a;i++){
				for(int j=i;j<y.size()&&y[j]<a;j++){
					for(int k=j;k<y.size()&&y[k]<a;k++){
						if(y[i]+y[j]+y[k]==a&&n%y[i]==0&&n%y[j]==0&&n%y[k]==0){
							//cout<<y[i]<<" "<<y[j]<<" "<<y[k]<<" "<<a<<" "<<n<<endl;
							cout<<n/y[i]<<" "<<n/y[j]<<" "<<n/y[k]<<endl;
							return 0;
						}
					}
				}
			}
			a*=2;
			int x=y.size();
			for(int i=0;i<x;i++)y.insert(y[i]*2);
			
			n*=2;
		}
	}
	return 0;
}