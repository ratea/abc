#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,C;
	cin>>n>>C;
	vector<vector<int> > a(31,vector<int>(1e5+1,0));
	
	long long int s,t,c;
	
	for(long long int i=0;i<n;i++){
		cin>>s>>t>>c;
		a[c][s]++;
		a[c][t+1]--;
	}
	
	long long int m=0;
	long long int p=0;
	
	vector<int> cp(31,0);
	
	for(long long int i=0;i<1e5+1;i++){
		for(int j=1;j<31;j++){
			cp[j]+=a[j][i];
			if(cp[j]>0){
				p++;
			}else if(cp[j]<0){
				p--;
			}
		}
		m=max(m,p);
	}
	
	cout<<m<<endl;
	
	
	return 0;
}