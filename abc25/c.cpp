#include "bits/stdc++.h"
using namespace std;

vector<vector<int> > b(2,vector<int>(3));
vector<vector<int> > c(3,vector<int>(2));
vector<vector<int> > used(3,vector<int>(3,0));

int cal(){
	int ans=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(used[i][j]==used[i+1][j]){
				ans+=b[i][j];
				//cout<<"a:"<<b[i][j]<<endl;
			}else{
				ans-=b[i][j];
				//cout<<"b:"<<b[i][j]<<endl;
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			if(used[i][j]==used[i][j+1]){
				ans+=c[i][j];
				//cout<<"a:"<<c[i][j]<<endl;
			}else{
				ans-=c[i][j];
				//cout<<"b:"<<c[i][j]<<endl;
			}
		}
	}
	
	/*
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<used[i][j]<<" ";
			}
		cout<<endl;
	}
	cout<<ans<<endl;
	*/
	
	return ans;
}

int dfs(int cnt,int score){
	if(cnt<9){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(used[i][j]==0){
					cnt++;
					used[i][j]=cnt%2+1;
					int tmp=dfs(cnt,score);
					if(score==-1e9){
						score=tmp;
					}else if(cnt%2==1){
						score=max(score,tmp);
					}else{
						score=min(score,tmp);
					}
					//cout<<score<<endl;
					cnt--;
					used[i][j]=0;
				}
			}
		}
	}else{
		score=cal();
	}
	return score;
}

int main(){
	int sum=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin>>b[i][j];
			sum+=b[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cin>>c[i][j];
			sum+=c[i][j];
		}
	}
	
	int ans=-1e9;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int cnt=1;
			used[i][j]=2;
			ans=max(ans,dfs(cnt,-1e9));
			//cout<<ans<<endl;
			used[i][j]=0;
		}
	}
	
	//cout<<ans<<endl;
	
	cout<<(ans+sum)/2<<endl;
	cout<<(sum-ans)/2<<endl;
	return 0;
}