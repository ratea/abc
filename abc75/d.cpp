#include "bits/stdc++.h"
using namespace std;

int ch(int bx,int sx,int by,int sy,int n,int k,vector<int> x,vector<int> y){
	int sum=0;
	for(int i=0;i<n;i++){
		if(x[i]>=sx&&
			x[i]<=bx&&
			y[i]>=sy&&
			y[i]<=by)
		{
			sum++;
		}
	}
	if(sum>=k){
		//cout<<sum<<" "<<k<<endl;
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int n,kk;
	cin>>n>>kk;
	vector<int> x(n);
	vector<int> y(n);
	
	for(int i=0;i<n;i++)cin>>x[i]>>y[i];
	
	long long int bx,by,sx,sy;
	
	long long int ans=1e18*9;
	//cout<<ans<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				for(int l=0;l<n;l++){
					bx=max(x[i],x[j]);
					sx=min(x[i],x[j]);
					by=max(y[k],y[l]);
					sy=min(y[k],y[l]);
					
					if(ch(bx,sx,by,sy,n,kk,x,y)==1){
						long long int tmp=(bx-sx)*(by-sy);
						//cout<<tmp<<endl;
						ans=min(ans,tmp);
					}
				}
			}
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}