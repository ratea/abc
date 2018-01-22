#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,k;
	cin>>n>>k;
	vector<vector<long long int> > wg(1001,vector<long long int>(1001,0));
	vector<vector<long long int> > bg(1001,vector<long long int>(1001,0));
	
	for(long long int i=0;i<n;i++){
		long long int a,b;
		char c;
		cin>>a>>b>>c;
		if((c=='B'&&((a/k)+(b/k))%2==0)||(c=='W'&&((a/k)+(b/k))%2==1)){
			bg[a%k][b%k]++;
		}else{
			wg[a%k][b%k]++;
		}
	}
	
	long long int ans=0;
	
	vector<vector<long long int> > brui(1002,vector<long long int>(1002,0));
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			brui[i+1][j+1]=bg[i][j];
		}
	}
	for(int i=0;i<k+1;i++){
		for(int j=0;j<k;j++){
			brui[i][j+1]+=brui[i][j];
		}
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<k+1;j++){
			brui[i+1][j]+=brui[i][j];
		}
	}
	
	vector<vector<long long int> > wrui(1002,vector<long long int>(1002,0));
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			wrui[i+1][j+1]=wg[i][j];
		}
	}
	for(int i=0;i<k+1;i++){
		for(int j=0;j<k;j++){
			wrui[i][j+1]+=wrui[i][j];
		}
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<k+1;j++){
			wrui[i+1][j]+=wrui[i][j];
		}
	}
	
	for(int i=0;i<k+1;i++){
		for(int j=0;j<k+1;j++){
			ans=max(ans,brui[i][j]+
				brui[k][k]-brui[i][k]-brui[k][j]+brui[i][j]+
				wrui[i][k]+wrui[k][j]-wrui[i][j]-wrui[i][j]);
			ans=max(ans,wrui[i][j]+
				wrui[k][k]-wrui[i][k]-wrui[k][j]+wrui[i][j]+
				brui[i][k]+brui[k][j]-brui[i][j]-brui[i][j]);
		}
	}
	
	cout<<ans<<endl;
	
}