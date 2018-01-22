#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<vector<int> > wg(2002,vector<int>(2002,0));
	vector<vector<int> > bg(2002,vector<int>(2002,0));
	
	int x=k*2;
	
	for(int i=0;i<n;i++){
		int a,b;
		char c;
		cin>>a>>b>>c;
		if(c=='B'){
			bg[a%x][b%x]++;
		}else{
			wg[a%x][b%x]++;
		}
	}
	
	int ans=0;
	
	int tmp=0;
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			if(((i/k)+(j/k))%2==0){
				tmp+=bg[i][j];
			}else{
				tmp+=wg[i][j];
			}
		}
	}
	
	ans=tmp;
	
	
	
	/*
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cout<<bg[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cout<<wg[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	
}