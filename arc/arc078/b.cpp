#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<set>
#include<algorithm>

int main(){
	int n;
	
	vector<edge> G((n-1)*2);
	
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	
	return 0;
}