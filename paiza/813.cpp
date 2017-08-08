#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<pair<int,int> > xy(n);
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		xy[i].first=a;
		xy[i].second=b;
	}
	
	int ans=0;
	int x=0;
	int y=0;
	
	for(int i=0;i<n;i++){
		ans+=hypot(x-xy[i].first,y-xy[i].second);
		x=xy[i].first;
		y=xy[i].second;
	}
	
	for(int i=0;i<1000000;i++){
		int a1=rand()%n;
		int a2=rand()%n;
		
		int tmp=xy[a1].first;
		xy[a1].first=xy[a2].first;
		xy[a2].first=tmp;
		
		tmp=xy[a1].second;
		xy[a1].second=xy[a2].second;
		xy[a2].second=tmp;
		
		int ans2=0;
		x=0;
		y=0;
		for(int i=0;i<n;i++){
			ans2+=hypot(x-xy[i].first,y-xy[i].second);
			x=xy[i].first;
			y=xy[i].second;
		}
		if(ans>ans2){
			ans=ans2;
		}else{
			tmp=xy[a1].first;
			xy[a1].first=xy[a2].first;
			xy[a2].first=tmp;
			
			tmp=xy[a1].second;
			xy[a1].second=xy[a2].second;
			xy[a2].second=tmp;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<xy[i].first<<" "<<xy[i].second<<endl;
	}
	return 0;
}