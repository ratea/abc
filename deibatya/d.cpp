#include "bits/stdc++.h"
using namespace std;

/*
long long int kk(long long int a,long long int b){
	long long int x=1;
	long long int y=1;
	for(int i=0;i<b;i++)x*=(a-i);
	for(int i=0;i<b;i++)y*=(b-i);
	//cout<<x<<" "<<y<<" "<<"aaaaaaa"<<endl;
	return x/y;
}
*/

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	vector<long long int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v.begin(),v.end(),greater<long long int>());
	double ans=0;
	for(int i=0;i<a;i++)ans+=v[i];
	//cout<<ans<<endl;
	ans/=a;
	cout<<fixed<<setprecision(20)<<ans<<endl;
	
	long long int ku=0;
	
	long long int ko=1;
	for(int i=1;i<a;i++){
		if(v[a-1-i]==v[a-1]){
			ko++;
		}else{
			break;
		}
	}
	
	long long int bc=a-ko;
	//cout<<bc<<endl;
	
	for(int i=a;i<n;i++){
		if(v[i]==v[a-1]){
			ko++;
		}else{
			break;
		}
	}
	
	//cout<<ko<<endl;
	
	vector<vector<long long int> > kumi(51,vector<long long int>(51) );
	for(int i=0;i<=n;++i){
		for(int j=0;j<=i;++j){
			if(j==0){
				kumi[i][j]=1LL;
			}else{
				kumi[i][j]=(kumi[i-1][j-1]+kumi[i-1][j]);
			}
		}
	}
	
	for(int i=a;i<=b;i++){
		ku+=kumi[ko][i-bc];
		//cout<<ko<<" "<<i-bc<<" "<<kumi[ko][i-bc]<<endl;
		if(bc!=0)break;
	}
	
	cout<<ku<<endl;
	
	return 0;
}