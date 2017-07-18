#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<queue>

int main(){
	int n;
	cin>>n;
	vector<int> G[n+1];
	
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	queue<int> qs;
	queue<int> qe;
	qs.push(1);
	qe.push(n);
	
	vector<int> used(n+1,0);
	used[n]=1;
	
	int ssco=0;
	int esco=0;
	
	int bfsp=1;
	int tmp=0;
	int bfsp2=1;
	while(!qs.empty()||!qe.empty()){
		for(int j=0;j<bfsp;j++){
			if(!qs.empty()){
				int a=qs.front();
				qs.pop();
				used[a]=1;
				ssco++;
				for(int i=0;i<G[a].size();i++){
					if(used[G[a][i]]==0){
						qs.push(G[a][i]);
						used[G[a][i]]=1;
						tmp++;
					}
				}
			}
		}
		bfsp=tmp;
		tmp=0;
		
		
		for(int j=0;j<bfsp2;j++){
			if(!qe.empty()){
				int a=qe.front();
				qe.pop();
				used[a]=1;
				esco++;
				for(int i=0;i<G[a].size();i++){
					if(used[G[a][i]]==0){
						qe.push(G[a][i]);
						used[G[a][i]]=1;
						tmp++;
					}
				}
			}
		}
		bfsp2=tmp;
		tmp=0;
	}
	
	//cout<<ssco<<" "<<esco<<endl;
	
	if(ssco>esco){
		cout<<"Fennec"<<endl;
	}else{
		cout<<"Snuke"<<endl;
	}
	
	return 0;
}