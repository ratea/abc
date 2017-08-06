#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	int i1=0;
	int i2=0;
	int i4=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%4==0){
			i4++;
		}else if(a[i]%2==0){
			i2++;
		}else{
			i1++;
		}
	}
	
	//cout<<i4<<" "<<i2<<" "<<i1<<endl;
	
	if(i2>0)i4--;
	
	if(i4+2>i1){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
	return 0;
}