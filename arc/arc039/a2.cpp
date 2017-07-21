#include "bits/stdc++.h"
using namespace std;
#include <string>


int main(){
	string a,b;
	cin>>a>>b;
	
	int ans=-9999;
	
	string na=a;
	string nb=b;
	
	for(int i=0;i<3;i++){
		a[i]='9';
		int ai=atoi(a.c_str());
		int bi=atoi(b.c_str());
		//cout<<ai<<" "<<bi<<endl;
		ans=max(ans,ai-bi);
		a=na;
		b[i]='1';
		if(i!=0)b[i]='0';
		ai=atoi(a.c_str());
		bi=atoi(b.c_str());
		ans=max(ans,ai-bi);
		//cout<<ai<<" "<<bi<<endl;
		b=nb;
	}
	
	cout<<ans<<endl;
	
	return 0;
}