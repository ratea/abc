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
	
	long long int tmp=0;
	for(long long int i=0;i<k;i++){
		for(long long int j=0;j<k;j++){
			tmp+=bg[i][j];
		}
	}
	
	ans=tmp;
	long long int ft=tmp;
	
	vector<vector<long long int> > rui(1001,vector<long long int>(1001,0));
	for(long long int i=0;i<k;i++){
		rui[0][i]=bg[0][i];
	}
	for(long long int i=1;i<k;i++){
		for(long long int j=0;j<k;j++){
			rui[i][j]=rui[i-1][j]+bg[i][j];
		}
	}
	
	vector<vector<long long int> > rui2(1001,vector<long long int>(1001,0));
	for(int i=0;i<k;i++){
		rui2[0][i]=wg[0][i];
	}
	for(int i=1;i<k;i++){
		for(int j=0;j<k;j++){
			rui2[i][j]=rui2[i-1][j]+wg[i][j];
		}
	}
	
	vector<vector<long long int> > rui3(1001,vector<long long int>(1001,0));
	for(int i=0;i<k;i++){
		rui3[i][0]=bg[i][0];
	}
	for(int i=0;i<k;i++){
		for(int j=1;j<k;j++){
			rui3[i][j]=rui3[i][j-1]+bg[i][j];
		}
	}
	
	vector<vector<long long int> > rui4(1001,vector<long long int>(1001,0));
	for(int i=0;i<k;i++){
		rui4[i][0]=wg[i][0];
	}
	for(int i=0;i<k;i++){
		for(int j=1;j<k;j++){
			rui4[i][j]=rui4[i][j-1]+wg[i][j];
		}
	}
	
	
	//cout<<tmp<<endl;
	
	for(int i=0;i<k;i++){
		tmp=ft;
		for(int j=0;j<i;j++){
			tmp-=rui3[j][k-1];
			tmp+=rui4[j][k-1];
		}
		for(int j=0;j<k;j++){
			if(i!=0){
				tmp+=rui[i-1][j];
				tmp-=rui2[i-1][j];
				tmp-=rui[k-1][j]-rui[i][j];
				tmp+=rui2[k-1][j]-rui2[i][j];
			}else{
				tmp-=rui[k-1][j];
				tmp+=rui2[k-1][j];
			}
			ans=max(ans,tmp);
		}
	}
	
	ans=min(ans,n);
	cout<<ans<<endl;
	
	/*
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			cout<<bg[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			cout<<wg[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
}