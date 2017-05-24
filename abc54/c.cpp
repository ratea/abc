#include<iostream>
using namespace std;
#include<vector>
#include<queue>

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(m);
	vector<int> b(m);
	for(int i = 0; i < m; i++){
		cin>>a[i]>>b[i];
	}
	
	queue<int> q;
	q.push(1);
	