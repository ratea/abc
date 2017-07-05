#include<iostream>
using namespace std;
#include<vector>

int main(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	vector<int> c(m);
	for(int i=0;i<m;i++){
		cin>>c[i];
	}
	
	for(int i=0;i<m;i++){
		if(n<=a)n+=b;
		n-=c[i];
		if(n<0){
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<"complete"<<endl;
	return 0;
}