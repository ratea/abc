#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
	long long int n,a,b;
	cin>>n>>a>>b;
	vector<int> h(n);
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	
	long long int hp=0;
	
	sort(h.begin(),h.end(),greater<int>());
	
	long long int l=0;
	long long int r=h[0];
	
	long long int mid=h[0]/2;
	
	for(int i = 0;i<100;i++){
		hp=mid*b;
		long long int hh=0;
		for(int j=0;j<n;j++){
			if((h[j]-hp)>0){
				hh+=(h[j]-hp)/(a-b);
				if((h[j]-hp)%(a-b)!=0)hh+=1;
			}
		}
		if(hh<=mid){
			r=mid;
			mid=(l+r)/2;
		}else{
			l=mid;
			mid=(l+r)/2;
		}
		if((l+r)%2!=0)mid++;
	}
	
	cout<<mid<<endl;
	return 0;
}