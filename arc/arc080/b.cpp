#include "bits/stdc++.h"
using namespace std;
 
int main(){
	int h,w;
	cin>>h>>w;
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int ans[h][w];
	
	int x=0;
	int k=0;
	
	for(int i=0;i<w;i++){
		if(i%2==0){
			for(int j=0;j<h;j++){
				ans[j][i]=k;
				x++;
				if(x>=a[k]){
					x=0;
					k++;
				}
				//cout<<i<<" "<<j<<" "<<k<<endl;
			}
		}else{
			for(int j=h-1;j>-1;j--){
				ans[j][i]=k;
				x++;
				if(x>=a[k]){
					x=0;
					k++;
				}
				//cout<<i<<" "<<j<<" "<<k<<endl;
			}
		}
	}
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w-1;j++){
			cout<<ans[i][j]+1<<" ";
		}
		cout<<ans[i][w-1]+1<<endl;
	}
	
	return 0;
}