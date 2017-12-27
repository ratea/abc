#include "bits/stdc++.h"
using namespace std;

int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	int l=a*60*60+b*60+c;
	int r=d*60*60+e*60+f;
	int ans=r-l;
	cout<<ans/60/60<<" "<<ans/60%60<<" "<<ans%60<<endl;
	
	cin>>a>>b>>c>>d>>e>>f;
	l=a*60*60+b*60+c;
	r=d*60*60+e*60+f;
	ans=r-l;
	cout<<ans/60/60<<" "<<ans/60%60<<" "<<ans%60<<endl;
	
	cin>>a>>b>>c>>d>>e>>f;
	l=a*60*60+b*60+c;
	r=d*60*60+e*60+f;
	ans=r-l;
	cout<<ans/60/60<<" "<<ans/60%60<<" "<<ans%60<<endl;
	
	
}