#include "bits/stdc++.h"
using namespace std;

int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	
	set<int> x;
	set<int> y;
	
	for(int i=0;100*a*i<=f;i++){
		for(int j=0;(100*a*i)+(100*b*j)<=f;j++){
			x.insert((100*a*i)+(100*b*j));
		}
	}
	
	for(int i=0;i<=1500;i++){
		for(int j=0;i+j<=1500;j++){
			y.insert(i+j);
		}
	}
	
	double ans=0;
	int ans1=0;
	int ans2=0;
	
	for(auto itr=x.begin();itr!=x.end();++itr){
		for(auto itr2=y.begin();itr2!=y.end();++itr2){
			if(*itr+*itr2<=f&&*itr2*100<=x*e){
				if(*itr*100/(*itr+*itr2)>ans){
					ans=*itr*100/(*itr+*itr2);
					ans1=*itr;
					ans2=*itr2;
				}
			}
		}
	}
	
	cout<<ans<<" "<<ans1<<" "<<ans2<<endl;
}