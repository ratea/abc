#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<map>
#include<algorithm>

int main(){
	int n;
	cin>>n;
	map<int,int> a;
	vector<int> b(n);
	vector<int> c(n);
	for(int i = 0;i<n;i++){
		int d;
		cin>>d;
		b[i]=d;
		a[d]=i;
	}
	
	sort(b.begin(),b.end(),greater<int>());
	
	for(int i = 0;i<n;i++){
		cout<<a[b[i]]+1<<endl;
	}
	return 0;
}