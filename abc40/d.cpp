#include "bits/stdc++.h"
using namespace std;

#define MAX_N 100001
 
int parent[MAX_N];
int ranka[MAX_N];
vector<int> point(MAX_N,1);

void init(int n){
	for(int i=0;i<n;i++){
		parent[i]=i;
		ranka[i]=0;
	}
}
int Find(int x){
	if(parent[x]==x){
		return x;
	}else{
		parent[x]=Find(parent[x]);
		return parent[x];
	}
}
void Union(int x,int y){
	x=Find(x);
	y=Find(y);
	if(x==y)return;
	if(ranka[x]<ranka[y]){
		parent[x]=y;
		int tmp=point[x]+point[y];
		point[x]=tmp;
		point[y]=tmp;
		//cout<<"ppp"<<point[x]<<" "<<point[y]<<endl;
	}else{
		parent[y]=x;
		int tmp=point[x]+point[y];
		point[x]=tmp;
		point[y]=tmp;
		//cout<<"ppp"<<point[x]<<" "<<point[y]<<endl;
		if(ranka[x]==ranka[y])ranka[x]++;
	}
}
bool same(int x,int y){
	return Find(x)==Find(y);
}

int main(){
	int n,m;
	cin>>n>>m;
	priority_queue<tuple<int,int,int> > pq;
	
	int a,b,y;
	for(int i=0;i<m;i++){
		cin>>a>>b>>y;
		pq.emplace(y,a,b);
	}
	
	int q;
	cin>>q;
	priority_queue<tuple<int,int> > pqa;
	vector<int> v(q);
	vector<int> w(q);
	for(int i=0;i<q;i++){
		cin>>v[i]>>w[i];
		pqa.emplace(w[i],v[i]);
	}
	
	map<pair<int,int>,int > mp;
	
	int j=0;
	
	int v2,w2;
	
	init(n+1);
	
	for(int i=0;i<q;i++){
		tie(v2,w2)=pqa.top();
		pqa.pop();
		while(pq.size()){
			j++;
			tie(y,a,b)=pq.top();
			//cout<<v2<<" "<<y<<"nbbbbb"<<endl;
			if(v2<y){
				Union(a,b);
				pq.pop();
				//cout<<point[a]<<" "<<point[b]<<"aaa"<<" "<<a<<" "<<b<<endl;
			}else{
				break;
			}
		}
		mp[pair<int,int>(v2,w2)]=point[Find(w2)];
		//cout<<v2<<" "<<w2<<" "<<point[Find(w2)]<<endl;
		//cout<<"qqqqq"<<mp[pair<int,int>(v[i],w[i])]<<" "<<point[Find(w2)]<<endl;
	}
	
	for(int i=0;i<q;i++){
		//cout<<v[i]<<" "<<w[i]<<endl;
		cout<<mp[pair<int,int>(w[i],v[i])]<<endl;
	}
	
	/*
	for(int i=0;i<m;i++){
		tie(y,a,b)=pq.top();
		pq.pop();
		cout<<a<<" "<<b<<" "<<y<<endl;
	}
	
	int v2,w2;
	
	for(int i=0;i<q;i++){
		tie(v2,w2)=pqa.top();
		pqa.pop();
		cout<<w2<<" "<<v2<<endl;
	}
	*/
	
	return 0;
}