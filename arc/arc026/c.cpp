#include "bits/stdc++.h"
using namespace std;

struct tap{
	long long int a,b,c;
	bool operator < (tap obj) const{
		return make_tuple(a,b,c) <make_tuple(obj.a,obj.b,obj.c);
	}
};

//seg
int p;
vector<long long int> dat(2*1e7+1,1e10+1);

void init(int n_){
	p=1;
	while(p<n_)p*=2;
}

void update(long long int k,long long int a){
	k+=p-1;
	dat[k]=a;
	while(k>0){
		k=(k-1)/2;
		dat[k]=min(dat[k*2+1],dat[k*2+2]);
	}
}

long long int quary(long long int a,long long int b,long long int k,long long int l,long long int r){
	if(r<=a||b<=l)return 1e10+1;
	
	if(a<=l&&r<=b){
		return dat[k];
	}else{
		long long int vl=quary(a,b,k*2+1,l,(l+r)/2);
		long long int vr=quary(a,b,k*2+2,(l+r)/2,r);
		return min(vl,vr);
	}
}

int main(){
	long long int n,l;
	cin>>n>>l;
	init(l);
	vector<tap> lrc;
	for(long long int i=0;i<n;i++){
		long long int l,r,c;
		cin>>l>>r>>c;
		lrc.push_back(tap{l,r,c});
	}
	sort(lrc.begin(),lrc.end());
	vector<long long int> dp(l+2,1e10+1);
	dp[0]=0;
	update(0,0);
	
	for(long long int i=0;i<n;i++){
		long long int tmin=quary(lrc[i].a,lrc[i].b+1,0,0,p);
		
		/*
		for(long long int j=lrc[i].a;j<=lrc[i].b;j++){
			tmin=min(tmin,dp[j]);
		}
		*/
		
		dp[lrc[i].b]=min(dp[lrc[i].b],tmin+lrc[i].c);
		update(lrc[i].b,dp[lrc[i].b]);
	}
	cout<<dp[l]<<endl;
}